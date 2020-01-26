/**********************************************
 * Spencer McDonough
 * EE599 - HW1
 * Question 2
 * 01/27/2020
**********************************************/
#ifndef GTEST_SAMPLES_FIND_MEDIAN_H_
#define GTEST_SAMPLES_FIND_MEDIAN_H_

#include <iostream>
#include <vector>

/**
 * Finds median of vector consisting of non-negative numbers.
 * 
 * @param   &input                  Reference to input <tt>vector</tt>.
 * 
 * @returns <tt>int</tt> median     On success.
 * @returns <tt>int</tt> -1         On failure.
 * 
 * */
int find_median(std::vector<int> &input);

#endif