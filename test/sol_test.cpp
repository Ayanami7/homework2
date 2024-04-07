#include <gtest/gtest.h>
#include "sol.h"

TEST(MaxSubArrayTest, Empty) {
    std::vector<int> nums = {};
    EXPECT_EQ(maxSubArray(nums), 0);
}

TEST(MaxSubArrayTest, OnlyElement) {
    std::vector<int> nums = {5};
    EXPECT_EQ(maxSubArray(nums), 5);
}

TEST(MaxSubArrayTest, AllPositive) {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    EXPECT_EQ(maxSubArray(nums), 15);
}

TEST(MaxSubArrayTest, AllNegative) {
    std::vector<int> nums = {-1, -2, -3, -4, -5};
    EXPECT_EQ(maxSubArray(nums), -1);
}

TEST(MaxSubArrayTest, Mixed) {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    EXPECT_EQ(maxSubArray(nums), 6);
}

TEST(MaxSubArrayTest, Zero) {
    std::vector<int> nums = {0, 0, 0, 0, 0};
    EXPECT_EQ(maxSubArray(nums), 0);
}
