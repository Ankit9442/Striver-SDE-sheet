#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int minsell = prices[0];
    int profit = 0;
    for( int i = 1 ;i<prices.size();i++)
    {
        profit = max(profit , prices[i] -minsell);
        minsell = min(minsell , prices[i]);
    }
    return profit;
}

int main()
{
    vector<int> arr = {3,2,6,5,0,3};
    cout<<maxProfit(arr);
     return 0;
}
