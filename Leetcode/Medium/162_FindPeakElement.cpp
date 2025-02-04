#include <bits\stdc++.h>

using namespace std;

int findPeakElement(vector<int> &nums)
{
    int s = nums.size();
    if (s == 1)
    {
        return 0;
    }
    else if (s == 2)
    {
        if (nums[0] > nums[1])
        {
            return 0;
        }
        return 1;
    }
    int left = 1;
    int right = s - 2;

    while (left <= right && s > 2)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
        {
            return mid;
        }
        else if (nums[mid - 1] < nums[mid])
        {
            if (mid == s - 2)
            {
                return mid + 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else if (nums[mid] > nums[mid + 1])
        {
            if (mid == 1)
            {
                return 0;
            }
            else
            {
                right = mid - 1;
            }
        }
        else
        {
            if (s == 3)
            {
                return 0;
            }
            else
            {
                left = mid + 1;
            }
        }
    }
    return -1;
}

int main(void)
{
    vector<int> arr = {1, 2, 3, 1};
    cout << findPeakElement(arr);
}