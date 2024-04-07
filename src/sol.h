#pragma once
#include <iostream>
#include <vector>

int maxSubArray(std::vector<int>& nums) 
{
    if(nums.empty())
        return 0;
    int n = nums.size();
    int max = nums[0];
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp += nums[i];
        if (temp >= max)
            max = temp;
        if (temp <= 0)
            temp = 0;
    }
    return max;
}
