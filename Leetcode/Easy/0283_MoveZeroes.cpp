#include <bits\stdc++.h>

using namespace std;
void moveZeroes(vector<int> &nums);

int main(void)
{
    vector<int> arr = {0,1,0,3,12};
    moveZeroes(arr);
    for (int x : arr)
    {
        cout << x << ",";
    }
}

void moveZeroes(vector<int> &nums)
{
    int temp = 0;
    for (int i = 0, l = nums.size(); i < l; i++)
    {
        if (nums[i] != 0)
        {
            for (int j = i; j > temp; j--)
            {
                swap(nums[j], nums[j-1]);
            }
            temp++;
        }
    }
}