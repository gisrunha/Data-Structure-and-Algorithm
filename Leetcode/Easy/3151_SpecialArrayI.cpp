#include <bits\stdc++.h>

using namespace std;

bool isArraySpecial(vector<int> &nums)
{
    for (int i = 0, l = nums.size(); i < l - 1; i++)
    {   
        if (nums[i] % 2 == 0 && nums[i+1] % 2 == 0 || nums[i] % 2 == 1 && nums[i+1] % 2 == 1)
        {
            return false;
        }
    }
    return true;
}

int main(void)
{
    vector<int> arr = {1};
    cout << isArraySpecial(arr);
}
