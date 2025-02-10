#include <bits\stdc++.h>

using namespace std;

void setZeroes(vector<vector<int>>& matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();
    vector<bool> m(rows, false);
    vector<bool> n(cols, false);
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 0)
            {
                m[i] = true;
                n[j] = true;
            }
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (m[i] || n[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main(void)
{
    vector<vector<int>> matrix = {
        {0, 2, 0, 4, 5, 6, 7, 8, 9},
        {9, 8, 7, 6, 5, 4, 3, 2, 1},
        {2, 3, 4, 5, 6, 7, 8, 9, 1},
        {8, 7, 6, 5, 4, 3, 2, 1, 9},
        {3, 4, 5, 6, 7, 8, 9, 1, 2},
        {7, 6, 5, 4, 3, 2, 1, 9, 8},
        {4, 5, 6, 7, 8, 0, 1, 2, 3},
        {6, 5, 4, 3, 2, 1, 9, 8, 7},
        {5, 6, 7, 8, 9, 1, 2, 3, 0}
    };

    setZeroes(matrix);

    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
    

}