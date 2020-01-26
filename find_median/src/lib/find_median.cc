/**********************************************
 * Spencer McDonough
 * EE599 - HW1
 * Question 2
 * 01/27/2020
**********************************************/

#include "find_median.h"

/** 
 * Quick sort
 * source: https://stackoverflow.com/questions/22504837/how-to-implement-quick-sort-algorithm-in-c
 * */
int partition(std::vector<int>& A, int p,int q)
{
    int x = A[p];
    int i = p;
    int j;

    for(j = p + 1; j < q; j++)
    {
        // ensure array is positive, throw error if not
        if(A[j] < 0)
        {
            return -1;
        }
        else if(A[j] <= x)
        {
            i = i + 1;
            std::swap(A[i],A[j]);
        }
    }

    std::swap(A[i],A[p]);
    return i;
}

int sort_input(std::vector<int>& A, int p,int q)
{
    int r;
    if(p < q)
    {
        r = partition(A, p,q);

        // ensure array is positive, throw error if not
        if(r == -1)
        {
            return -1;
        }

        sort_input(A,p,r);  
        sort_input(A,r + 1,q);
    }
    return r;
}


int find_median(std::vector<int> &input)
{
    int result = -1;
    int input_size = input.size();
    if(input_size > 0)
    {
        // sort input and scan for negative values
        if ((result = sort_input(input, 0, input_size)) >= 0)
        {
            result = input[input_size / 2];
        }
    }
    return result;
}
