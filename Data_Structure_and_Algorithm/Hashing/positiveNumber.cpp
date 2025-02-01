#include <bits\stdc++.h>

using namespace std;

// int new_arr[10000000];
/*
arry can have max size of 1e6 inside of main func
and 1e7 if declared globally (for type int)

inside main max size 1e7
globally max size 1e8 (for type boolean)
*/

// hashing programme for positive numbers
int main()
{
    // original array
    int arr[] = {1, 2, 1, 3, 4, 5, 3, 5, 9, 7, 3, 5}; 
    
    // max element of arry 9
    int maxx = 9;

    // hash array
    int hashh[maxx + 1] = {0};

    // adding data to hash arry
    for (int x : arr)
    {
        hashh[x]++;
    }

    int num;
    // check how many times any number appear from original arry
    cout << "Enter : ";
    cin >> num;

    cout << num << " appear " << hashh[num] << " times.";


}