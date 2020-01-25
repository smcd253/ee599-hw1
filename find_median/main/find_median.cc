/**********************************************
 * Spencer McDonough
 * EE599 - HW1
 * Question 2
 * 01/27/2020
**********************************************/

#include <iostream>
#include <vector>

/**
 * Finds median of vector consisting of non-negative numbers.
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
        // assert all values in input vector are positive
        for (int i = 0; i < input_size; i++)
        {
            if(input[i] < 0)
            {
                return -1;
            }
        }

        // return median
        return input[input_size / 2];
    }

    // return -1 if vector is empty or other error occurs
    return -1;
}

int main(int argc, char **argv)
{

    std::vector<int> my_vector = {1, 2, 3, 4, 4, 5, 6, 7, 7, 7, 8, 9, 10};
    int result = 0;

    if (!my_vector.empty())
    {
        result = find_median(my_vector);
    }

    if(result >= 0)
    {
        printf("Median of vector = %d\n", result);
    }
    else
    {
        printf("Vector is invalid, return with result code %d\n", result);
    }
    
    
    return 0;
}
