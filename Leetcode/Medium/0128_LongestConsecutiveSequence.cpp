#include <bits\stdc++.h>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    if (nums.size() == 0){return 0;}
    map<long, bool> mapp;
    for(int x : nums)
    {
        mapp[x] = true;
    }

    int res = 1;
    long temp = -1000000009;
    int i = 1;
    for (auto x : mapp)
    {
        if (x.first == temp + 1)
        {
            if (i > res)
            {
                res = i;
            }
        }
        else {i = 1;}
        temp = x.first;
        i++;
    }
    return res;
}

int main(void)
{
    vector<int> arr = {100,4,200,1,3,2};
    cout << longestConsecutive(arr);

}