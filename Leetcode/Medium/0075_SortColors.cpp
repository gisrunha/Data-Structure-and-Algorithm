#include <bits\stdc++.h>

using namespace std;

void sortColors(vector<int>& nums) {
    int zeroo = 0;
    int onee = 0;
    int twoo = 0;
    for (int x : nums)
    {
        if (x == 0){zeroo++;}
        else if (x == 1){onee++;}
        else {twoo++;}
    }
    for (int i = 0, l = (zeroo + onee + twoo); i < l; i++)
    {
        if (zeroo)
        {
            nums[i] = 0;
            zeroo--;
        }
        else if (onee)
        {
            nums[i] = 1;
            onee--;
        }
        else
        {
            nums[i] = 2;
            twoo--;
        }
    }
}

int main(void)
{
    vector<int> arr = {2, 1};
    sortColors(arr);
    for (int x : arr)
    {
        cout << x << ",";
    }

}