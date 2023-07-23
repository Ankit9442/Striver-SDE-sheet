#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

    int m = matrix.size();
    int n = matrix[0].size();
    int low = 0, high = m * n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (matrix[mid / n][mid % n] == target)
            return true;
        else if (matrix[mid / m][mid % n] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

int main()
{


   vector<vector<int>> arr = {{1,1}};
  cout<<  searchMatrix(arr , 2 );
    return 0;
}