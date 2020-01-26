/**********************************************
 * Spencer McDonough
 * EE599 - HW1
 * Question 2
 * 01/27/2020
**********************************************/

#include "src/lib/find_median.h"

int main(int argc, char **argv)
{
    std::vector<int> my_vector = {1, 2, 3, 4, 5, 6, 7, 7, 7, 8, 9, 10, 2, 4, 5, 6, 1, 1, 1, 1, 1, 1, 1, 1, 1};
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
