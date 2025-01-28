#include <bits\stdc++.h>

using namespace std;

int numIdenticalPairs(vector<int>& nums)
{
    vector<int> hashh(101, 0);
    int sum = 0;

    for (int x : nums)
    {
        hashh[x] = hashh[x] + 1;
    }

    for (int x : hashh)
    {   
        if (x > 0)
        {
            sum += (x*(x - 1)) / 2;
        }
    }
    return sum;
}
    

int main(void)
{
    vector<int> arr = {5,5,1,77,96,96,89,80,12,23,1,6,3,66,39,88,48,38,44,32,44,36,60,87,53,77,72,49,13,39,60,60,71,68,80,75,79,38,4,14,59,75,6,91,87,95,25,55,83,18,26,59,53,100,42,96,76,22,21,4,22,46,34,39,98,82,54,73,52,33,47,73,54,23,82,98,13,51,52,1,96,69,76};
    cout << numIdenticalPairs(arr);
}