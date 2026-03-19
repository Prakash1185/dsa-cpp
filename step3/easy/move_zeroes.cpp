#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[count++] = nums[i];
        }
    }
    while (count < nums.size())
    {
        nums[count++] = 0;
    }
}

int main()
{
    vector<int> arr;
    arr = {2, 0, 2, 0, 0, 0, 3, 0, 0, 9};
    moveZeroes(arr);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}