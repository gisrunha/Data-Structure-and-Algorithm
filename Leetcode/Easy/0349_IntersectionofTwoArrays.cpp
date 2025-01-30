#include <bits\stdc++.h>

using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<bool> arr(1001, false);
    vector<int> result;

    for (int i = 0, l = nums1.size(); i < l; i++)
    {
        arr[nums1[i]] = true;
    }
    for (int i = 0, l = nums2.size(); i < l; i++)
    {
        if(arr[nums2[i]])
        {
            result.push_back(nums2[i]);
            arr[nums2[i]] = false;
        }
    }
    return result;
}
    

int main(void)
{

}