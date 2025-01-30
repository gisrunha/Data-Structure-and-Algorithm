#include <bits\stdc++.h>

using namespace std;

int singleNumber(vector<int>& nums)
{
    set<int> arr;
    int small_sum = 0;
    int big_sum = 0;

    for (int x : nums)
    {
        if (x < 0) {x*(-1);}
        arr.insert(x);
        small_sum += x;
    }
    for (int x : arr)
    {
        big_sum += x;
    }
    return (big_sum * 2 - small_sum);
}


int main()
{
    vector<int> arr = {-2, -2, 4, 3, 3};
    cout << singleNumber(arr);
}