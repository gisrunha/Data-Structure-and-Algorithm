#include <bits/stdc++.h>

using namespace std;
// The time complexity of the selection sort algorithm is O(n²)

// Function to perform selection sort
int selectionSort(vector<int> &vec)
{
    // Loop through each element in the vector
    for (int i = 0, l = vec.size(); i < l - 1; i++)
    {
        // Assume the current element is the smallest
        int small = i;

        // Find the smallest element in the remaining unsorted portion
        for (int j = i + 1; j < l; j++)
        {
            if (vec[small] > vec[j])
            {
                // Update small if a smaller element is found
                small = j;
            }
        }

        // Swap the found smallest element with the current element
        int temp = vec[i];
        vec[i] = vec[small];
        vec[small] = temp;
    }
}

int main(void)
{
    // Initialize a vector with some values
    vector<int> arr = {5, -2, 3, 0, 1, -1, 4, 2};

    // Call selectionSort function to sort the vector
    selectionSort(arr);

    // Print the sorted vector
    for (int v : arr)
    {
        cout << v << " ";
    }

    return 0;
}
