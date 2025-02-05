#include <bits\stdc++.h>

using namespace std;

void rotate(vector<int> &nums, int k)
{
    int s = nums.size();
    if (k > s)
    {
        k %= s;
    }
    for (int i = 0; i < (s / 2); i++)
    {
        int temp = nums[i];
        nums[i] = nums[s - i - 1];
        nums[s - i - 1] = temp;
    }
    for (int i = 0; i < (s - k) / 2; i++)
    {
        int temp = nums[i + k];
        nums[i + k] = nums[s - i - 1];
        nums[s - i - 1] = temp;
    }
    for (int i = 0; i < (k / 2); i++)
    {
        int temp = nums[i];
        nums[i] = nums[k - i - 1];
        nums[k - i - 1] = temp;
    }
}

int main(void)
{
    vector<int> arr = {1, 2};
    rotate(arr, 3);
    for (int x : arr)
    {
        cout << x << ",";
    }
}