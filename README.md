# ee599-hw1
**Spencer McDonough**<br>
**01/27/2020**<br>

# Clone this repository
```
git clone https://github.com/smcd253/ee599-hw1.git
```
# Question 1 - 15 points (Medium)
*Use proof by contradiction to prove that the FindMax function always finds the maximum value in the input vector for non empty input vectors.*

if result is not the maximum in the input vector, then there exists an element in the input vector that is larger than result

r &#8714; Z &and; inputs = {n: n &#8714; (-&infin;,&infin;), n &#8714; Z} (assumption) <br>
r= FindMax(inputs) (assumption) <br>
&exist; m &#8714; inputs : m > r (claim) <br>

FindMax(inputs) = {r : r > n &forall;n &#8714; inputs} (definition of FindMax) <br>
m &#8714; inputs &and; m > FindMax(inputs) <br>
&#8658; m &#8714; inputs &and; m > {r : r > n &forall;n &#8714; inputs} <br>
&#8658; m &#8714; inputs &and; m &#8714; {m : m > {r : r > n &forall;n &#8714; inputs}} <br>
&#8658; m &#8714; inputs &and; m &#8714; &empty; = &#8869; <br>

&there4; FindMax always finds the maximum



# Question 2 - 10 points (Easy)
*Create an account on Github and Stackoverflow account and post a link to it.*

GitHub: https://github.com/smcd253 <br>
Stackoverflow: https://stackoverflow.com/users/10029343/spencer-mcdonough <br>


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

Run main.cc:
```
bazel run src/main:main
```

Run Tests:
```
bazel test test:test --test_output=all
```

## Run Time
```
int main(int argc, char **argv)
{
    std::vector<int> my_vector = {};                                        1
    int result = 0;                                                         2

    if (!my_vector.empty())                                                 3
    {
        result = find_median(my_vector);                                    4
    }

    if(result >= 0)                                                         11 + nlog(n + 2)
    {
        printf("Median of vector = %d\n", result);                          12 + nlog(n + 2)
    }
    else
    {
        printf("Vector is invalid, return with result code %d\n", result);
    }
    
    
    return 0;                                                               13 + nlog(n + 2)
}

int find_median(std::vector<int> &input)
{
    int result = -1;                                                        5
    int input_size = input.size();                                          6 
    if(input_size > 0)                                                      7
    {
        // sort input and scan for negative values
        if ((result = sort_input(input, 0, input_size)) >= 0)               8 + nlog(n + 2)
        {
            result = input[input_size / 2];                                 9 + nlog(n + 2)
        }
    }
    return result;                                                          10 + nlog(n + 2)
}
```

**&there4; runtime = 13 + nlog(n + 2) ~ nlog(n)**

# Question 4 - 20 points (Easy)
*Create a new repo of a simple C++ program that prints your own name and any information about you that you want (e.g. your major, your expertise, your interests, etc).*

## Compile Instructions

cd into print_info directory
```
cd print_info
```

Run main.cc:
```
bazel run src/main:main
```

# Question 5 - 20 points (Medium)
*Determine the time complexity for the following 2 functions.*

## Example 1
time complexity = 0(nlog(n))

## Example 2
time complexity = 0(log(n))

# Question 6 - 25 points (Medium)
*The factorial of a non-negative integer n, shown as n! (read as n-factorial) is defined to be the product of all positive integers that are smaller than or equal to n.*

## Prompts
1. *Based on cpp-template, add a function like “int solution::Factorial(int n)” in solution class to compute the factorial of any input number n>=0.*
    - *Please propose a result for the case when n is less than 0?*
2. *Can you implement both the recursive and non-recursive versions?*
3. *Add some test cases using GTest to test your factorial function.*
4. *Calculate the runtime of both implementations.*
5. *Provide a proof of correctness for the non-recursive version.*
6. *Check it into a new github repository.*

## Compile Instructions
cd into factorial directory
```
cd factorial
```

Run main.cc:
```
bazel run src/main:main
```

Run Tests:
```
bazel test tests:tests --test_output=all
```

## Answers
### 1. See factorial/src/lib/solution.cc
    - Both functions return -1 for an input less than 0
### 2. See factorial/src/lib/solution.cc
### 3. See factorial/tests/solution_test.cc
### 4. Runtime analysis below:
Factorial():
```
int main()
{
    Solution solution;                                  1
    std::cout << solution.Factorial(-1) << std::endl;   2

    return EXIT_SUCCESS;                                7 + 2n
}
int Solution::Factorial(int n)
{
  int result = 1;                                       3

  if (n < 0)                                            4
  {
    result = -1;
  }
  else if(n > 0)                                        5
  {
    while (n > 0)                                       5 + 2n
    {
      result *= n;
      n--;
    }
  }

  return result;                                        6 + 2n
}
```
**&there4; runtime = 7 + 2n ~ O(n)**

Factorial_Recursive():
```
int main()
{
    Solution solution;                                              1    
    std::cout << solution.Factorial_Recursive(5) << std::endl;      2   

    return EXIT_SUCCESS;                                            3 + 5n
}
int Solution::Factorial_Recursive(int n)                            5n
{
  int result = 1;                                                   1

  if (n < 0)                                                        2
  {
    result = -1;
  }
  else if(n > 0)                                                    3
  {
    return n*Factorial_Recursive(n-1);                              4
  }

  return result;                                                    5
}
```

**&there4; runtime = 3 + 5n ~ O(n)**

### 5. Proof of Correctness - Factorial() (Proof by Induction): <br>

**Base Case: Factorial(1) = 1! = 1** <br>
- Factorial(n = 1)<br>
- result = 1 (provided) <br>
- if(n > 0) = TRUE (1 is a positive integer) <br>
- while (n > 0) = TRUE (1 is a positive integer)
    - result *= 1 <br>
    - result = result * 1 (definition of '*=') <br>
    - result = 1 * 1 = 1 <br>
    - n-- &#8658; n = n - 1 &#8658; n = 0 <br>
- while (n > 0) = FALSE (n = 0) <br>
- return result = 1 <br>
**&there4; Factorial(n = 1) = 1 (QED Base Case)** <br>

**Induction: Factorial(n = k + 1) = (k + 1)!**
- Assume Factorial(n = k) = k!
- Factorial(n = k + 1)
- result = 1 (provided) <br>
- if(n > 0) = TRUE (k + 1 is a positive integer) <br>
*try n = n - 1 (n = k)*
- while (n > 0) = TRUE (k is a positive integer) <br>
    - result *= n <br>
    - result = result * n (definition of '*=') <br>
    - result = (k)(k - 1)*...*(n) <br>
    - n-- &#8658; n = n - 1 &#8658; 
*above will run k times* <br>
- while (n > 0) = FALSE (n = 0) <br>
*now result = k! = Factorial(n = k)* <br>
*try result = result * (k + 1)* <br> 
*now result = (k + 1) * k! = (k + 1)!* <br>
- return result = (k + 1)! <br>
**&there4; Factorial(n = k + 1) = (k + 1)! (QED)**



### 6. See this repository https://github.com/smcd253/ee599-hw1
