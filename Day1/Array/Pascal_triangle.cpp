#include <bits/stdc++.h>
using namespace std;

// int ncr(int n, int r)
// {
//     int c = r ;
//     int a = 1, b = 1;
//     for (int i = 1; i <= c; i++)
//     {
//         a = a * n;
//         n = n - 1;
//         b = b * r;
//         r = r - 1;
//     }
//     return a / b;
// }

// vector<vector<int>> generate(int numRows)
// {
//     vector<vector<int>> res;
//     for (int i = 0; i < numRows; i++)
//     {
//         vector<int> temp;
//         for (int k = 0; k <=i ; k++)
//         {
//           int val = ncr(i , k);
//           temp.push_back(val);
//         }
//         res.push_back(temp);
//     }
//     return res;
// }

vector<int> generaterow(int n)
{
    long long ans = 1;
    vector<int> res;
    res.push_back(1);
    for (int i = 1; i < n ; i++)
    {
        ans = ans * (n - i);
        ans = ans / i;
        res.push_back(ans);
    }

    return res;
}

vector<vector<int>> generate(int numRows)
{
    vector<vector<int>> res;
    for(int i = 1 ; i <=numRows ; i++)
    {
        res.push_back(generaterow(i));
    }
      for (auto row : res)
        {
            for (int element : row)
            {
                cout << element << " ";
            }
            cout << endl;
        }
    return res;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> pascal =  generate(5) ;




        return 0;
}