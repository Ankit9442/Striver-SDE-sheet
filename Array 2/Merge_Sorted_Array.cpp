#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
     if(m == 0 )
    {
       for(int i = 0 ; i<n ; i++)
       {
        nums1[i] = nums2[i];
       }
       return ;
    }

    int a = m-1  , b = n-1;
   int i = m+n -1;
  while(a>= 0 && b >= 0)
    {
        if(nums1[a] > nums2[b])
        {
          nums1[i--] = nums1[a];
          a--;
        }
        else{
            nums1[i--] = nums2[b];
            b--;
        }
    }
    if(b< 0) return ;
    if(a < 0 )
    {
        while(b>=0)
        {
              nums1[i--] = nums2[b];
              b--;
        }
    }
}

int main()
{
    vector<int> nums1 = {2 , 0};
    vector<int> nums2 = {1};
  
     merge(nums1 ,1 , nums2 , 1 );

     for(auto i : nums1)
     {
        cout<<i<< " ";
     }

    return 0;
}