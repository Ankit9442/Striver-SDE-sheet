#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    vector<vector<int>> res;
    int n = intervals.size();

    for (int i = 0; i < n; i++)
    {
        int start = intervals[i][0];
        int end = intervals[i][1];
        if (res.empty() || res.back()[1] < start) 
        {
            res.push_back({start, end});
        }
        else
        {
            res.back()[1] = max(end, res.back()[1]);
        }
    }

    return res;
}

int main()
{

    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> res = merge(arr);
    for (auto i : res)
    {
        cout << "[ ";
        for (auto j : i)
            cout << j << " ";
        cout << "]\t\t";
    }

    return 0;
}