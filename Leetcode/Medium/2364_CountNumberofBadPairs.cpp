#include <bits\stdc++.h>

using namespace std;
long long countBadPairs(vector<int>& nums)
{
    long l = nums.size();
    long long result = (l * (l - 1)) / 2;

    unordered_map<long, long> mapp;
    for (int i = 0; i < l; i++)
    {
        mapp[nums[i] - i]++;
    }

    for (auto x : mapp)
    {
        long temp = x.second;
        if (temp > 1)
        {
            result -= ((temp * (temp - 1)) / 2);
        }
    }
    return result;
}

int main(void)
{
    vector<int> arr = {1,2,5,6,7};
    cout << countBadPairs(arr);

}