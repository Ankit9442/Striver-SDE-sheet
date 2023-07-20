#include <bits/stdc++.h>
using namespace std;

/****
    [1 2 3 ]
    1               2            3    
    1 2             2 3        
    1 2 3     
      |              |           |
      3              2           1 

      for n -> n 
       
       total number of sunarray  = 1 + 2+ 3+ 4 ......+ n 
      
    total number of sunarray = n(n+1)/2


*/

void printsubarray(vector<int> &arr)
{
    int n  = arr.size();
    int sum  , max_sum  = INT_MIN ;
    for(int i = 0; i< n ; i++)
    {
       for(int j  = i ; j < n ; j++)
       {   
          sum = 0 ;
           for(int k = i ; k<=j ; k++)
           {
              cout<<arr[k]<<" ";
              sum += arr[k];
           }
           cout<<endl;
           if(max_sum < sum)
           {
             max_sum = sum;
           }
            
       }
    }
    cout<<"max sum : "<<max_sum;
}

int main ()
{
    vector<int> arr = {1 ,2 ,3 };
     printsubarray(arr);

    return 0;
}