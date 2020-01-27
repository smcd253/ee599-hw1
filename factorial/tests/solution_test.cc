#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

/**********FUNCTION TO TEST: Factorial()**********/

/**
 * Factorial(0) should return 1 
 * */
TEST(FACTORIAL_TEST, ZERO) {
  Solution solution;
  int actual = solution.Factorial(0);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

/**
 * Factorial(1) should return 1 
 * */
TEST(FACTORIAL_TEST, ONE) {
  Solution solution;
  int actual = solution.Factorial(1);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

/**
 * Factorial(-1) should return -1 
 * */
TEST(FACTORIAL_TEST, NEGATIVE_ONE) {
  Solution solution;
  int actual = solution.Factorial(-1);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

/**
 * Factorial(5) should return 120 
 * */
TEST(FACTORIAL_TEST, FIVE) {
  Solution solution;
  int actual = solution.Factorial(5);
  int expected = 120;
  EXPECT_EQ(expected, actual);
}

/**********FUCNTION TO TEST: Factorial_Recursive()**********/
/**
 * Factorial_Recursive(0) should return 1 
 * */
TEST(FACTORIAL_RECURSIVE_TEST, ZERO) {
  Solution solution;
  int actual = solution.Factorial_Recursive(0);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

/**
 * Factorial_Recursive(1) should return 1 
 * */
TEST(FACTORIAL_RECURSIVE_TEST, ONE) {
  Solution solution;
  int actual = solution.Factorial_Recursive(1);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

/**
 * Factorial_Recursive(-1) should return -1 
 * */
TEST(FACTORIAL_RECURSIVE_TEST, NEGATIVE_ONE) {
  Solution solution;
  int actual = solution.Factorial_Recursive(-1);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

/**
 * Factorial_Recursive(5) should return 120 
 * */
TEST(FACTORIAL_RECURSIVE_TEST, FIVE) {
  Solution solution;
  int actual = solution.Factorial_Recursive(5);
  int expected = 120;
  EXPECT_EQ(expected, actual);
}