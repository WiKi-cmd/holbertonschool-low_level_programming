## ANALYSIS

# aliasing_example.c

valgrind --leak-check=full --track-origins=yes ./aliasing_example
==42329== Memcheck, a memory error detector
==42329== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==42329== Using Valgrind-3.26.0 and LibVEX; rerun with -h for copyright info
==42329== Command: ./aliasing_example
==42329==
aliasing_example: aliasing and use-after-free (Valgrind should report it)
  a=0x4a93480 b=0x4a93480 a[2]=22 b[2]=22
  after free(a): b=0x4a93480 (dangling)
==42329== Invalid read of size 4
==42329==    at 0x40012F2: main (aliasing_example.c:42)
==42329==  Address 0x4a93488 is 8 bytes inside a block of size 20 free'd
==42329==    at 0x48538BF: free (vg_replace_malloc.c:990)
==42329==    by 0x40012CE: main (aliasing_example.c:38)
==42329==  Block was alloc'd at
==42329==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==42329==    by 0x40011E4: make_numbers (aliasing_example.c:12)
==42329==    by 0x4001272: main (aliasing_example.c:30)
==42329==
  reading b[2]=22
==42329== Invalid write of size 4
==42329==    at 0x4001312: main (aliasing_example.c:44)
==42329==  Address 0x4a9348c is 12 bytes inside a block of size 20 free'd
==42329==    at 0x48538BF: free (vg_replace_malloc.c:990)
==42329==    by 0x40012CE: main (aliasing_example.c:38)
==42329==  Block was alloc'd at
==42329==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==42329==    by 0x40011E4: make_numbers (aliasing_example.c:12)
==42329==    by 0x4001272: main (aliasing_example.c:30)
==42329==
==42329== Invalid read of size 4
==42329==    at 0x4001320: main (aliasing_example.c:45)
==42329==  Address 0x4a9348c is 12 bytes inside a block of size 20 free'd
==42329==    at 0x48538BF: free (vg_replace_malloc.c:990)
==42329==    by 0x40012CE: main (aliasing_example.c:38)
==42329==  Block was alloc'd at
==42329==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==42329==    by 0x40011E4: make_numbers (aliasing_example.c:12)
==42329==    by 0x4001272: main (aliasing_example.c:30)
==42329==
  wrote b[3]=1234
==42329==
==42329== HEAP SUMMARY:
==42329==     in use at exit: 0 bytes in 0 blocks
==42329==   total heap usage: 2 allocs, 2 frees, 1,044 bytes allocated
==42329==
==42329== All heap blocks were freed -- no leaks are possible
==42329==
==42329== For lists of detected and suppressed errors, rerun with: -s
==42329== ERROR SUMMARY: 3 errors from 3 contexts (suppressed: 0 from 0)

- No memory leaks
- 3 errors in total, 2 Invalid read of size 4 and one Invalid write of size 4
- The memory object involved is the same for all 3 errors, the heap block of 20 bytes (5 * sizeof(int)) freed in main at line 38 (free(a))
- Invalid read of size 4 (line 42) : this is a use-after-free where we try to dereference b[2] although the the block was already freed which is undefined behavior (b is a dangling pointer at this point)
- Invalid write of size 4 (line 44) : this is also a use-after-free where we try to change the value of b[3], same reasoning as before so undefined behavior with the added risk of possibly corrupting data if said memory was reallocated since
- Invalid read of size 4 (line 45) : this is a use-after-free where we try to dereference b[3] although the the block was already freed which is undefined behavior (b is a dangling pointer at this point)
-AI errors, doesn't separate a and b as different varaibles at first, considered the invalid write as more dangerous with no additionnal contextand thus speculated.

# heap_example.c

valgrind --leak-check=full --track-origins=yes ./heap_example
==45230== Memcheck, a memory error detector
==45230== Copyright (C) 2002-2024, and GNU GPL'd, by Julian Seward et al.
==45230== Using Valgrind-3.26.0 and LibVEX; rerun with -h for copyright info
==45230== Command: ./heap_example
==45230==
heap_example: allocations and a deliberate leak
  alice=0x4a93480 name=0x4a934d0 age=30
  bob=0x4a93520 name=0x4a93570 age=41
==45230==
==45230== HEAP SUMMARY:
==45230==     in use at exit: 6 bytes in 1 blocks
==45230==   total heap usage: 5 allocs, 4 frees, 1,066 bytes allocated
==45230==
==45230== 6 bytes in 1 blocks are definitely lost in loss record 1 of 1
==45230==    at 0x4850858: malloc (vg_replace_malloc.c:447)
==45230==    by 0x4001211: person_new (heap_example.c:21)
==45230==    by 0x40012FA: main (heap_example.c:51)
==45230==
==45230== LEAK SUMMARY:
==45230==    definitely lost: 6 bytes in 1 blocks
==45230==    indirectly lost: 0 bytes in 0 blocks
==45230==      possibly lost: 0 bytes in 0 blocks
==45230==    still reachable: 0 bytes in 0 blocks
==45230==         suppressed: 0 bytes in 0 blocks
==45230==
==45230== For lists of detected and suppressed errors, rerun with: -s
==45230== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)

- one memory leak of 6 bytes
- the memory object involved is the heap copy of the string "Alice", 6-byte block allocated for alice->name which is freed incorrectly
- Indeed, for Alice, the freeing process is passed to the function person_free_partial(Alice) which only frees the structure itself but not the pointer alice->name so we lose the adress of said pointer and thus we lose the 6-bytes allocated to said pointer
- AI errors: assumed all frees came from the program when one came libc, presented "6 bytes means Alice" when it's only further proof and not how we can check (==45230==    by 0x40012FA: main (heap_example.c:51) this is the line showing us the issue comes from Alice)
