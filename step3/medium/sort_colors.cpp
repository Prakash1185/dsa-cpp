#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int n = nums.size();
    int i = 0;
    int j = 0;
    int k = n - 1;
    while (j <= k)
    {
        if (nums[j] == 1)
        {
            j++;
        }
        else if (nums[j] == 2)
        {
            swap(nums[j], nums[k]);
            k--;
        }
        else
        {
            swap(nums[j], nums[i]);
            i++;
            j++;
        }
    }
}

int main()
{
    vector<int> arr;
    arr = {1, 0, 0, 1, 2, 1, 0, 0, 2, 1, 1};
    sortColors(arr);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}