## ANALYSIS

# aliasing_example.c

- Before entering the main functtion, the STACK and HEAP are empty.
- When we do enter main, 3 variables are initialized, two pointers to an integer (a and b, both empty for now) and an integer (n), they reside in the STACK (main() frame) and begin their lifetime here; the HEAP is still empty.
- When main() calls make_numbers(5), a new STACK frame is created (make_numbers() frame) with the return adress (back in main), a copy of main's n, another integer variable (i) and a pointer to an integer (arr), their lifetime begins here.
- After arr = (int *)malloc((size_t)n * sizeof(int)), arr now points to a an array of size 5 dedicated to receive 5 integers (20 bytes) in the HEAP (array's lifetime starts here)
- After the for loop, the array arr points to is filled with 5 integers values.
- After the return arr, we are back in main, the make_numbers() frame is popped (end of the lifetimes of the main's n copy, i and arr) and the pointer value of arr is copied into a.
- After b = a (aliasing), both pointers now point to the same memory block (the array).
- After free(a), array's lifetime ends here (20 byte memory block), a and b become dangling.
- We try to print the b pointer value which is valid because it's an address because it never dereferences the pointer
- But then, we try to use-after-free read because by freeing a, we freed the memory block it pointed to and since a and b are aliases, the memory bloc b pointed to has also been freed
- We then try to use-after-free write, same issue than before but possibly worse because the block was freed and probably reallocated so we may corrupt data
- After return 0, main exits and a, b and n lifetimes are over
- As a consequence, the compiling using the Makefile fails due to both uses-after-free which is undefined behavior
- AI errors, considering HEAP empty when printf is called, agreeing with the banner saying "deterministic segmentation fault" and considering it the only outcome when in fact it is undefined behavior

# stack_example.c

- First of, this program never calls malloc, calloc or realloc, so there's no program-owned HEAP objects
- When main calls walk_stack(0, 3), 3 variables are initialized (lifetime begins here for these), 3 integers ( depth = 0, max_depth = 3 and marker = 0), they all reside in the same STACK frame.
- when walk_stack calls dump_frame("enter", depth), 4 variables are initialized, a constant string (label), an integer (local_int), an array of characters of size 16 (local_buf) and a pointer to an integer (p_local) that points to local_int's address, their lifetime begins here.
- when dump_frame() returns, all of those variables created when the call was made "die" (end of lifetime)
- this process is repeated (due to recursion) so the memory is splitted into 4 walk_stack frames and one dump_frame (all in the STACK)
- every marker gets its own address due to the recursive call
- Then, each walk_stack(depth, max_depth) calls dump_frame("exit", depth), printing its marker at each call and ending their local variables' lifetime
- program ends
- Ai made a few errors, notably consistently saying was empty even when printf is called which is untrue, assuming walk_stack and dump_fram frames were of the same exact size, considering dump_frame the deepest point of the stack when it is printf.
