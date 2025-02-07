#include <bits\stdc++.h>

using namespace std;

/*
Time complexity both for fetching and storing

Ordered Map: O(logn) in both best and worst cases.
Unordered Map: best --> O(1) and worst O(n) [worst case is very rare]
*/

int main(void)
{
    vector<int> numList = {-2, -5, 2, 5, 6, 7, 6, 2};
    // ordered map
    unordered_map<int, int> myMap;

    for (int x : numList)
    {
        myMap[x]++;
    }


    for (auto x : myMap) // Auto iterator is needed for iterating in map.
    {
        // first is key and second is value
        cout << x.first << " --> " << x.second << endl;
    }

}