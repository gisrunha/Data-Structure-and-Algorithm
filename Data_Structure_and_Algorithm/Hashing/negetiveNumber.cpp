#include <bits\stdc++.h>

using namespace std;

// hashing programme for negetive numbers
int main()
{
    // original array
    int arr[] = {-1, -3, 4, 5, 6, 0, 0, -4, -1, 4, -4, -3, 5, -6};

    // max element of arry 6 and min is -6
    int maxx = 6;

    // length of hash array is double because of negetive numbers.
    int length = (maxx * 2) + 1;

    // hash array
    int hashh[length] = {0};

    // adding data to hash arry
    for (int x : arr)
    {
        (x > -1) ? hashh[x]++ : hashh[length + x]++;
    }

    int num;
    int result;

    // check how many times any number appear from the original array.
    cout << "Enter : ";
    cin >> num;

    if (num >= 0 && num <= maxx)
    {
        result = hashh[num];
    }
    else if (num < 0 && num >= -maxx)
    {
        result = hashh[length + num];
    }
    else {result = -1;}

    cout << num << " appear " << result << " times.";
}