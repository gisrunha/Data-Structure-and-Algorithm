#include <bits\stdc++.h>

using namespace std;

// Function to perform binary search
int binarySearch(vector<int> vec, int target)
{
    int left = 0;               // Initialize left boundary of the search range
    int right = vec.size() - 1; // Initialize right boundary of the search range

    while (left <= right) // Continue searching while the range is valid
    {                                        
        int mid = left + (right - left) / 2; // Calculate the middle index to avoid overflow

        if (vec[mid] == target) // Check if the middle element is the target
        {               
            return mid; // Target found, return its index
        }
        else if (target < vec[mid])  // Target is in the left half
        {                   
            right = mid - 1; // Adjust the right boundary
        }
        else // Target is in the right half
        {                   
            left = mid + 1; // Adjust the left boundary
        }
    }
    return -1; // Target not found, return -1
}

int main(void)
{
    vector<int> arr = {2, 5, 9, 15}; // Initialize a sorted vector

    cout << binarySearch(arr, 5); // Call binarySearch function and print the result
}
