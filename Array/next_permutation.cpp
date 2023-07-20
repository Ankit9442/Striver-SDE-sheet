#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> &nums)
{
    int index = -1;
    int n = nums.size();
   for(int i = n-2 ; i>= 0 ;i--)
   {
     if(nums[i] < nums[i+1] )
     {
        index = i;
        break;
     }
   }
   if(index == -1)
   {
      reverse(nums.begin() , nums.end());
      return ;
   }
   for(auto x : nums)
    {
        cout<<x <<" ";
    }
    cout<<endl;
   for(int i = n-1 ; i>index ; i--)
   {
    if(nums[index] < nums[i])
    {
        swap(nums[index] , nums[i]);
        break;
    }
   }
    for(auto x : nums)
    {
        cout<<x <<" ";
    }
    cout<<endl;
    reverse(nums.begin() + index + 1  , nums.end());
   
  
}



int main()
{

  vector<int> nums = {1 , 3, 2 };
    nextPermutation(nums);
    for(auto x : nums)
    {
        cout<<x <<" ";
    }
    return 0;
}