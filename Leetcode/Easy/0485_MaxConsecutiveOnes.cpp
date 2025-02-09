#include <bits\stdc++.h>

using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int res = 0;
    int temp = 0;
    for (int i = 0, l = nums.size(); i < l; i++)
    {
        if (nums[i] == 1)
        {
            temp++;
        }
        if (nums[i] == 0 || (i == nums.size() - 1))
        {
            cout << i << endl;
            if (temp > res)
            {
                res = temp;
            }
            temp = 0;
        }
    }
    return res;
}

int main(void)
{
    vector<int> arr = {1,1,1,0,1,1,0,1,1,1,1};
    cout << findMaxConsecutiveOnes(arr);

}