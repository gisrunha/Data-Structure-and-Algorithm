#include <bits\stdc++.h>

using namespace std;

vector<int> findDuplicates(vector<int>& nums)
{
    vector<int> arr((10e5) +1, -1);
    vector<int> result;
    
    for (int i = 0, l = nums.size(); i < l; i++)
    {
        arr[nums[i]]++;
    }

    for (int i = 0; i < (10e5) + 1; i++)
    {
        if (arr[i] == 1)
        {
            result.push_back(i);
        }
    }

    return result;
}


int main(void)
{
    vector<int> arr = {3,3, 4, 5,5};
    vector<int> new_a = findDuplicates(arr);

    // cout << findDuplicates()

    for (int x : new_a)
    {
        cout << x << endl;
    }
}