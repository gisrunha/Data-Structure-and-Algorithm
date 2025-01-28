#include <bits/stdc++.h>

using namespace std;

// Time complexity in worst case O(n²) and in best case O(n)

// Function to perform bubble sort
int bubbleSort(vector<int> &vec)
{
    // Loop through each element in the vector except the last one
    for (int i = 0, l = vec.size(); i < l - 1; i++)
    {
        bool sorted = true; // Assume the array is sorted

        // Compare adjacent elements and swap if needed
        for (int j = 0; j < l - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                swap(vec[j], vec[j + 1]); // Swap elements
                sorted = false;           // Set sorted to false if a swap occurs
            }
        }

        // If no elements were swapped, the array is already sorted
        if (sorted)
        {
            break;
        }
    }
}

int main(void)
{
    // Initialize a vector with some values
    vector<int> arr = {1, 2, 3, 4, 5, 6, 1};

    // Call bubbleSort function to sort the vector
    bubbleSort(arr);

    // Print the sorted vector
    for (int v : arr)
    {
        cout << v << " ";
    }

    return 0;
}
