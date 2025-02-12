#include <bits\stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {

    vector<int> result (nums.size(), 0);
    int i = 0, j = 1;
    for (int x : nums)
    {
        // if x is positive
        if (x > 0)
        {
            result[i] = x;
            i += 2;
        }
        else
        {
            result[j] = x;
            j += 2;
        }
    }
    return result;
}

int main(void)
{  
    vector<int> arr = {-1, -2, 5};
    arr = rearrangeArray(arr);
    
    for (int x : arr)
    {
        cout << x << ",";
    }

}