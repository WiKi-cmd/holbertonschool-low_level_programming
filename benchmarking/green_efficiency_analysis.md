# Measurement Methodology

The measurement methodology is as followed: each clock time is started before the beginning of a process, that is to say, we start the clock before each function call in the main or, if there is no call, before the body of the main fucntion. We stop the clock at the end of the process but before the output (printf()). We then convert this process time by diving the difference between the end and the start by CLOCKS_PER_SEC to get the elapsed time result in seconds. We finally print the result as a float with 6 decimals max
For example:

int main(void)
	clock_t start;
	clock_t end;
	double elapsed;

	start = clock();
	function();
	end = clock;
	elapsed = (double)(end - start) / (double)CLOCKS_PER_SEC;
	printf("Time elapsed: %.6f\n", elapsed);

# Observed Performance Differences

Task 0 Results:
 Iterations: 100000000
Execution time: 0.071407 seconds
Iterations: 100000000
Execution time: 0.070095 seconds
Iterations: 100000000
Execution time: 0.064190 seconds

Task 1 Results:
Naive algorithm result: 625025000
Naive algorithm time: 0.572488 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000026 seconds
Naive algorithm result: 625025000
Naive algorithm time: 0.583030 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000021 seconds
Naive algorithm result: 625025000
Naive algorithm time: 0.554829 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000022 seconds

AVERAGE TIME:
- Naive algorithm: 0.570116 seconds
- Single-pass algorithm: 0.000023 seconds
- Naive algorithm is on average 24 787,7 times slower than Single-pass algorithm


Task 2 Results:

TOTAL seconds: 0.000271
BUILD_DATA seconds: 0.000122
PROCESS seconds: 0.000102
REDUCE seconds: 0.000047

TOTAL seconds: 0.000286
BUILD_DATA seconds: 0.000134
PROCESS seconds: 0.000108
REDUCE seconds: 0.000044

TOTAL seconds: 0.000286
BUILD_DATA seconds: 0.000134
PROCESS seconds: 0.000108
REDUCE seconds: 0.000044

Task 0, we noticed that the same program running multiple time doesn't necesseraily mean that all runtimes will be equal (3 different runtimes, close but different).

Task 1, we are presented with the concept of complexity, a program with a complexity of O(n) (single_pass algotrithm) runs a lot faster than a program with a O(n**2) complexity (naive algorithm)

Task 2, we are presented with the concept of consistent testing, deciding the boundaries for each measurement (Build_data runtime, Process runtime and Reduce runtime) in a way that allows us to precisely compare them. In other words, deciding for all three where to start and stop the clock so that the results can be compared precisely.
Moreover, we notice by comparing the results that generally, regardin runtime, REDUCE < PROCESS < BUILD_DATA. We can also see all three are of complexity O(n), however, the body of each functions are more or less heavy.
Indeed, REDUCE only multiples by a constant, PROCESS divides and uses modulo and BUILD_DATA multiplies, uses modulo and depends on the latency for each generation of the state variable.
# Relation Between Runtime and Energy Consumption

Through this project, we can make the hypothesis that Energy Consumption = machine power x time, every time the code gets more complex, if we compare each codes provided to us in this project, the time spent rises.
In other words, less runtime = less energy consumption. Striving for a shorter runtime is striving for a less energy hungry process.

# Limitations of the Experiment

We can point that a faster code doesn't always mean a green code, it can also mean greater ressources used to make more complex processes faster (High-end CPU, high Memory Usage). In my case, that means that my results are biased towards the performances of my computer.
Also, what's measured in each of those cases isn't exactly the whole process, we only measure the time the processess spend to call or use functions but not the time spent initializing the variables or the time spent to format and send the output.
Moreover, we can discuss the precision of each measurement, indeed, the same program running three separate times provides us with different results (Task 0) so comparing a changing result to another must lead to imprecisions in regard of wether a code is more or less green.

# Practical Engineering Takeaway

Consequently, writing a greener code depends on several factors, the code itself and how complex it is, the machine on which the process is gonna run and how the time spent on each process is calculated. By taking those factors into consideration we can then strive to write codes that are more efficient without spending more ressources.
