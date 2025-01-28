#include <bits\stdc++.h>

using namespace std;

string triangleType(vector<int>& nums)
{
    int booo = 0;
    if (nums[0] + nums[1] > nums[2] && nums[0] + nums[2] > nums[1] && nums[1] + nums[2] > nums[0])
    {
        booo = 1;
    }
    if(booo)
    {
        int x = nums[0];
        if (nums[0] == x && nums[1] == x && nums[2] == x)
        {
            return "equilateral";
        }
        else if (nums[0] == nums[1] || nums[0] == nums[2] || nums[1] == nums[2])
        {
            return "isosceles";
        }
        else
        {
            return "scalene";
        }
    }
    return "none";
}

int main(void)
{
    vector<int> v = {2,6,7};
    cout << triangleType(v);
    return 0;
}