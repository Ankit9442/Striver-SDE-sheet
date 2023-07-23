#include <bits/stdc++.h>
using namespace std;
//
vector<vector<int>> rotate_by_90(vector<vector<int>> &arr)
{
    vector<vector<int>> ans;
    int n = arr[0].size();
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            temp.push_back(arr[n - 1 - j][i]);
        }
        ans.push_back(temp);
    }
    return ans;
}
// optimal 
/***
 *   1 -> transpose
 *   2 -> reverse
 * 
*/
void rotate_by_90_optimal(vector<vector<int>> &matrix)
{
   int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
          swap(matrix[i][j] , matrix[j][i]);
        }
    }
    for(auto &i: matrix )
    {
         
         reverse(i.begin() , i.end()) ;
    }

    
}

void reversearr(vector<vector<int>> &arr)
{
    for(auto i : arr)
    {
        reverse(i.begin() , i.end());
    }
}


int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

 
   rotate_by_90_optimal(arr);
  
    for (auto i : arr)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}