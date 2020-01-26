#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::Factorial(int n)
{
  int result = 1;

  if (n < 0)
  {
    result = -1;
  }
  else if(n > 0)
  {
    while (n > 0)
    {
      result *= n;
      n--;
    }
  }

  return result;
}

int Solution::Factorial_Recursive(int n)
{
  int result = 1;

  if (n < 0)
  {
    result = -1;
  }
  else if(n > 0)
  {
    return n*Factorial_Recursive(n-1);
  }

  return result;
}
