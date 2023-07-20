#include <bits/stdc++.h>
using namespace std;

//  better
void sortColorsBT(vector<int> &nums) // O(2n)
{
    int zero = 0, one = 0, two = 0;
    for (auto x : nums)
    {
        if (x == 0)
            zero++;
        else if (x == 1)
            one++;
        else
            two++;
    }

    int k = 0;
    for (int i = 0; i < zero; i++)
    {
        nums[k++] = 0;
    }
    for (int i = 0; i < one; i++)
    {
        nums[k++] = 1;
    }
    for (int i = 0; i < two; i++)
    {
        nums[k++] = 2;
    }
}

// optimal dutch national flag algo

void sortColorsOP(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {1, 2};

    //   sort(arr.begin(), arr.end());  //  O(nlog(n))
    sortColorsOP(arr);
    for (auto x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}