#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:

  /**
   * Computes factorial of input integer.
   * 
   * @param   n                           input <tt>int</tt>.
   * 
   * @returns <tt>int</tt> n!             On success.
   * @returns <tt>int</tt> -1             On failure (negative number, invalid input, etc.)
   * 
   * */
  int Factorial(int n);

  /**
   * Computes factorial of input integer recursively.
   * 
   * @param   n                           input <tt>int</tt>.
   * 
   * @returns <tt>int</tt> n!             On success.
   * @returns <tt>int</tt> -1             On failure (negative number, invalid input, etc.)
   * 
   * */
  int Factorial_Recursive(int n);
};

#endif