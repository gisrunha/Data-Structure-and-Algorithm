#include <bits\stdc++.h>

using namespace std;

void nextPermutation(vector<int>& nums) {
    // 1, 2, 3
    int index = -1;
    int l = nums.size();
    for (int i = l - 1; i > 0; i--)
    {
        if(nums[i-1] < nums[i])
        {
            index = i - 1;
            break;
        }
    }

    if (index == -1)
    {
        for (int i = 0; i < l/2; i++)
        {
            swap(nums[i], nums[l - i - 1]);
        }
        return;
    }
    
    for (int i = l - 1; i > index; i--)
    {
        if(nums[index] < nums[i])
        {
            swap(nums[index], nums[i]);
            break;
        }
    }

    for (int i = index + 1; i <= (index + l) / 2; i++)
    {
        swap(nums[i], nums[index + l - i]);
    }


}

int main(void)
{
    vector<int> arr = {1, 2, 3};
    nextPermutation(arr);

    for (int x : arr)
    {
        cout << x << ", ";
    }
    
}