#include <bits\stdc++.h>

using namespace std;

int countPrimes(int n)
{
    vector<bool> arr(n + 1, true);
    int count = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (arr[i] == true)
        {
            for (int j = i * i; j < n; j += i)
            {
                arr[j] = false;
            }
        }
    }
    for (int i = 2, l = arr.size() - 1; i < l; i++)
    {
        if (arr[i])
        {
            count++;
        }
    }
    return count;
}

int main(void)
{
    cout << countPrimes(3);
    return 0;
}