#include <bits/stdc++.h>
using namespace std;


// using an extra space =  map
void fun(vector<vector<int>> &result, vector<int> &arr, int n, vector<int> &ds, vector<bool> &map)
{
    if (ds.size() == n)
    {
        result.push_back(ds);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (map[i] == false)
        {
            ds.push_back(arr[i]);
            map[i] = true;
            fun(result, arr, n, ds, map);
            ds.pop_back();
            map[i] = false;
        }
    }
}

// using swapping technique without extra space 
void fun2(vector<vector<int>> &result, vector<int> &ds, int n, int &index)
{
    if(index == n )
    {
        result.push_back(ds);
        return;
    }
    for( int i = index ; i< n ; i++)
    {
        swap(ds[i] , ds[index]);
        fun2(result , ds , n , index+1);
        swap(ds[i] , ds[index]);
    }
}

int main()
{
    vector<int> arr = {3, 2, 1};
    vector<int> copy = arr;
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    vector<int> ds;
    vector<bool> map = {false};
    fun(result, arr, arr.size(), ds, map);
    for (auto i : result)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    auto it = find(result.begin(), result.end(), copy);
    cout << distance(result.begin(), it) << endl;
    if (it + 1 == result.end())
    {
        for (auto i : result[0])
        {
            cout << i << " ";
        }
    }
    else
    {
        for (auto i : *(it + 1))
        {
            cout << i << " ";
        }
    }

    return 0;
}