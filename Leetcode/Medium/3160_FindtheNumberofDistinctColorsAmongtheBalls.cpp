#include <bits\stdc++.h>

using namespace std;
vector<int> queryResults(int limit, vector<vector<int>> &queries)
{
    // unordered_map<int, int> ballColor;
    unordered_map<int, int> ballColor;
    unordered_map<int, int> colorCount;
    vector<int> result;

    for (int i = 0, l = queries.size(); i < l; i++)
    {
        int ball = queries[i][0];
        int color = queries[i][1];

        // if the ball is already colored
        if (ballColor[ball] != 0)
        {
            // getting that color
            int temp = ballColor[ball];
            colorCount[temp]--;
            // if no ball has that color that erase that color from colorCount
            if (colorCount[temp] < 1)
            {
                colorCount.erase(temp);
            }
        }
        ballColor[ball] = color;
        colorCount[color]++;
        result.push_back(colorCount.size());
    }
    return result;
}

int main(void)
{
    // [[0,1],[1,2],[2,2],[3,4],[4,5]]
    vector<vector<int>> testt = {{1, 4}, {2, 5}, {1, 3}, {3, 4}};
    queryResults(1, testt);
}