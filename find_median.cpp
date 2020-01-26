/**********************************************
 * Spencer McDonough
 * EE599 - HW1
 * Question 2
 * 01/27/2020
**********************************************/

#include <stdlib.h>
#include <vector>

namespace std
{
    /**
     * Finds median of vector
     * 
     * @param   input                   The input <tt>vector</tt>.
     * 
     * @returns <tt>int</tt> median     On success.
     * @returns <tt> int</tt> -1        On failure.
     * 
     * */
    int find_median(vector input)
    {
        int input_size = vector::size(input);
        if(input_size) <= 0)
        {
            return -1;
        }
        else
        {
            for (i = 0; i < input_size; i++)
            {
                if((input_size / i) == 2)
                {
                    return input[i];
                }
            }
        }
        
    }
    int main(int argc, char **argv)
    {

        vector my_vector = {1, 2, 3, 4, 4, 5, 6, 7, 7, 7, 8, 9, 10};
        int median = 0;

        if (my_vector != NULL)
        {
            median = find_median(my_vector);
        }

        printf("Median of vector = %d\n", median);
        
        return 0;
    }
}
