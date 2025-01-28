#include <iostream>
#include <vector>

using namespace std;
int searchInsert(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }

        if (left > right)
        {
            return left;
        }
    }
    return 0;
}

int main()
{
    vector<int> num = {1, 2};
    cout << searchInsert(num, 3);
}