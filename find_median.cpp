/**********************************************
 * Spencer McDonough
 * EE599 - HW1
 * Question 2
 * 01/27/2020
**********************************************/

#include <iostream>
#include <vector>

/**
 * Finds median of vector
 * 
 * @param   input                   The input <tt>vector</tt>.
 * 
 * @returns <tt>int</tt> median     On success.
 * @returns <tt>int</tt> -1         On failure.
 * 
 * */
int find_median(std::vector<int> input)
{
    int input_size = input.size();
    if(input_size > 0)
    {
        return input[input_size / 2];
    }

    // return -1 if vector is empty or other error occurs
    return -1;
}

int main(int argc, char **argv)
{

    std::vector<int> my_vector = {1, 2, 3, 4, 4, 5, 6, 7, 7, 7, 8, 9, 10};
    int median = 0;

    if (!my_vector.empty())
    {
        median = find_median(my_vector);
    }

    printf("Median of vector = %d\n", median);
    
    return 0;
}
