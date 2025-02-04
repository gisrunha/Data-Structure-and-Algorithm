#include <bits\stdc++.h>

using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> final_array;
    double result;
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] <= nums2[j])
        {
            final_array.push_back(nums1[i++]);
        }
        else
        {
            final_array.push_back(nums2[j++]);
        }
    }

    while (i < nums1.size())
    {
        final_array.push_back(nums1[i++]);
    }
    while (j < nums2.size())
    {
        final_array.push_back(nums2[j++]);
    }
    int s = final_array.size();

    if(s % 2 == 0)
    {
        result = (final_array[(s/2)] + final_array[((s/2) - 1)]) / (double) 2;
    }
    else
    {
        result = final_array[s/2];
    }
    return result;
}

int main(void)
{
    vector<int> x = {3, 0, 11, 9};
    vector<int> y = {5, 7};
    cout << findMedianSortedArrays(x, y);
}