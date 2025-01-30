#include <bits\stdc++.h>

using namespace std;

bool search(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    for (int i = 0, l = nums.size(); i < l - 1; i++)
    {
        
        if (nums[i] > nums[i+1])
        {   
            if (nums[i+1] == target)
            {
                return true;
            }
            else if(nums[i+1] < target && nums[l-1] < target)
            {
                right = i;
                break;
            }
            else
            {
                left = i + 2;
                right = l - 1;
                break;
            }
            
        }
    }
    cout << left << right << endl;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return true;
        }
        else if (target < nums[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return false;
}

int main(void)
{
    vector<int> arr = {1, 3};
    cout << search(arr, 3);
    return 0;
}