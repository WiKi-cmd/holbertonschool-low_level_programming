# Measurement Methodology

The measurement methodology is as followed: each clock time is started before the beginning of a process, that is to say, we start the clock before each function call in the main or, if there is no call, before the body of the main fucntion. We stop the clock at the end of the process but before the output (printf()). We then convert this process time by diving the difference between the end and the start by CLOCKS_PER_SEC to get the elapsed time result in seconds. We finally print the result as a float with 6 decimals max
For example:
int main(void)
    clock_t start;
    clock_t end;
    double elapsed

    start = clock();
    function();
    end = clock
    elapsed = (double)(end - start) / (double)CLOCKS_PER_SEC
    printf("Time elapsed: %.6f\n", elapsed)

# Observed Performance Differences

In task 0, we noticed that the same program running multiple time doesn't necesseraily mean that all runtimes will be equal (3 different runtimes, close but different).
In task 1, we are presented with the concept of complexity, a program with a complexity of O(n) (single_pass algotrithm) runs a lot faster than a program with a O(n**2) complexity (naive algorithm)
In task 2, we are presented with the concept of consistent testing, deciding the boundaries for each measurement (Build_data runtime, Process runtime and Reduce runtime) in a way that allows us to precisely compare them. In other words, deciding for all three where to start and stop the clock so that the results can be compared precisely.

# Relation Between Runtime and Energy Consumption

Through this project, we can make the hypothesis that Energy Consumption = machine power x time, in other words, less runtime = less energy consumption. So striving for a shorter runtime is also striving for a less energy hungry process.

# Limitations of the Experiment

We can, however, point that a faster code doesn't always mean a green code, it can also mean greater ressources used to make more complex processes faster (High-end CPU, high Memory Usage). In my case, that means that my results are biased towards the performances of my computer and different machines can so output different results.
Also, what's measured in each of those cases isn't exactly the whole process, we only measure the time the processess spend to call or use functions but not the time spent initializing the variables or the time spent to format and send the output.

# Practical Engineering Takeaway

Consequently, writing a greener code depends on several factors, the code itself and how complex it is, the machine on which the process is gonna run and how the time spent on each process is calculated. By taking those factors into consideration we can then strive to write codes that are more efficient without spending more ressources.
