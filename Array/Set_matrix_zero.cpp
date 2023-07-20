#include <bits/stdc++.h>
using namespace std;

void setZeroesBT(vector<vector<int>> &matrix)     // n^2 and O(n+m)
{
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> i_arr = {0}, j_arr = {0};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                i_arr[i] = 1;
                j_arr[j] = 1;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i_arr[i] == 1 || j_arr[j] == 1)
            {
                matrix[i][j] = 0;
            }
        }
    }
}

void setZeroesOP(vector<vector<int>> &matrix)  // n^2 and O(1)
{
    int m = matrix.size();
    int n = matrix[0].size();
    int col0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                if (j == 0)
                {
                    col0 = 0;
                }
                else
                {
                    matrix[0][j] = 0;
                }
            }
        }
    }
    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if(matrix[0][0] == 0 ) 
    {
        for (int j = 0; j < n; j++)
        {
            matrix[0][j] = 0 ;
        }
    }
    if(col0 == 0 )
    {
          for (int i = 0; i < m; i++)
          {
            matrix[i][0] = 0 ;
          }
    }
}

    int main()
    {

        vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 0}, {1, 3, 1, 5}};
        for (auto row : matrix)
        {
            for (int element : row)
            {
                cout << element << " ";
            }
            cout << std::endl;
        }

        setZeroesOP(matrix);
        cout << "after" << endl;

        for (auto row : matrix)
        {
            for (int element : row)
            {
                cout << element << " ";
            }
            cout << std::endl;
        }

        return 0;
    }