#include <bits\stdc++.h>

using namespace std;

int maxSubArray(vector<int>& nums) {
    int result = INT_MIN;
    int temp = 0;
    for (int i = 0, l = nums.size(); i < l; i++)
    {
        temp += nums[i];
        if (temp > result)
        {
            result = temp;
        }
        if (temp < 0)
        {
            temp = 0;
        }
    }
    return result;
}

int main(void)
{
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSubArray(arr);

}
