/* unittest_SimpleMath.cpp : Defines the entry point for the console application. */

#include "gtest/gtest.h"
extern "C" {
#include "simpleMath.h"
}

TEST(testMath, myCubeTest)
{
    EXPECT_EQ(1000, cubic(10));	
}