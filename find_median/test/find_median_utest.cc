/**********************************************
 * Spencer McDonough
 * EE599 - HW1
 * Question 2
 * 01/27/2020
**********************************************/

#include "gtest/gtest.h"
#include "src/lib/find_median.h"

namespace 
{

    /**
    * Tests find_median() for empty input
    * */
    TEST(FIND_MEDIAN_TEST, EMPTY)
    {
        std::vector<int> test_vector = {};

        EXPECT_EQ(-1, find_median(test_vector));
    }

    /**
    * Tests find_median() for negative input
    * */
    TEST(FIND_MEDIAN_TEST, NEGATIVE)
    {
        std::vector<int> test_vector = {1, -1};

        EXPECT_EQ(-1, find_median(test_vector));
    }

    /**
    * Tests find_median() for singular input
    * */
    TEST(FIND_MEDIAN_TEST, SINGULAR)
    {
        std::vector<int> test_vector = {1};

        EXPECT_EQ(1, find_median(test_vector));
    }

    /**
    * Tests find_median() for zero input
    * */
    TEST(FIND_MEDIAN_TEST, ZERO)
    {
        std::vector<int> test_vector = {0, 0, 0};

        EXPECT_EQ(0, find_median(test_vector));
    }

    /**
    * Tests find_median() for unsorted input
    * */
    TEST(FIND_MEDIAN_TEST, UNSORTED)
    {
        std::vector<int> test_vector = {10, 5, 1, 1, 0};

        EXPECT_EQ(1, find_median(test_vector));
    }
}