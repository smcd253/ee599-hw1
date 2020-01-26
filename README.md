# ee599-hw1
# Spencer McDonough
# 01/27/2020

# Question 1 - 15 points (Medium)
*Use proof by contradiction to prove that the FindMax function always finds the maximum value in the input vector for non empty input vectors.*

if result is not the maximum in the input vector, then there exists an element in the input vector 

# Question 2 - 10 points (Easy)
*Create an account on Github and Stackoverflow account and post a link to it.*

GitHub: https://github.com/smcd253
Stackoverflow: https://stackoverflow.com/users/10029343/spencer-mcdonough


# Question 3 - 20 points (Easy)
*Similar to FindMax, write a function called FindMedian which finds the median of a vector of non-negative numbers.*
* *Write some tests for it using GTest.*
* *Check it into your github.*
* *Find its runtime.*

## Compile Instructions

cd into find_median directory
```
cd find_median
```

Run Main.cc:
```
bazel run src/main:main
```

Run Tests:
```
bazel test test:test --test_output=all
```

## Run Time
bazel INFO: Elapsed time: 0.034s, Critical Path: 0.00s

# Question 4 - 20 points (Easy)
*Create a new repo of a simple C++ program that prints your own name and any information about you that you want (e.g. your major, your expertise, your interests, etc).*

## Compile Instructions

cd into print_info directory
```
cd print_info
```

Run Main.cc:
```
bazel run src/main:main
```

# Question 5 - 20 points (Medium)
*Determine the time complexity for the following 2 functions.*

## Example 1
time complexity = 0(nlog(n))

## Example 2
time complexity = 0(log(n))