#include <bits\stdc++.h>

using namespace std;


int main(void)
{
    vector<int> arr1 = {3, 5, 9, 11, 15};
    vector<int> arr2 = {4, 6, 10, 13, 17};

    vector<int> list(arr1.size() + arr2.size());

    int i = 0, j = 0, m = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            list[m++] = arr1[i++];
        }
        else
        {
            list[m++] = arr2[j++];
        }
    }
    for (; i < arr1.size();)
    {
        list[m++] = arr1[i++];
    }
    for (; j < arr2.size();)
    {
        list[m++] = arr2[j++];
    }

    for (int x : list)
    {
        cout << x << endl;
    }

}


