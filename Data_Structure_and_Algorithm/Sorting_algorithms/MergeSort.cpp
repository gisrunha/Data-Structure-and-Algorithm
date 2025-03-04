#include <bits/stdc++.h>

using namespace std;

// The time complexity of merge sort is O(nlogn)

void mergee(vector<int> &arr, int left, int mid, int right)
{
    vector<int> temp;
    int i = left, j = mid + 1;

    while(i <= mid && j <= right)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i++]);
        }
        else
        {
            temp.push_back(arr[j++]);
        }
    }
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    while (j <= right)
    {
        temp.push_back(arr[j++]);
    }
    for (int i = left; i <= right; i++)
    {
        arr[i] = temp[i - left];
    }
}

void mSort(vector<int> &arr, int left, int right)
{
    if (left >= right){return;}
    int mid = (left + right) / 2;

    mSort(arr, left, mid);
    mSort(arr, mid + 1, right);
    mergee(arr, left, mid, right);
}

int main(void)
{
    vector<int> arr = {9, 5, 3, 7, 2, 6, 1, 4, 8, -5};
    mSort(arr, 0, 9);
    
    for (int x : arr)
    {
        cout << x << endl;
    }
}