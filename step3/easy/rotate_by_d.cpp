#include <bits/stdc++.h>
using namespace std;

void reverseNum(vector<int> &nums, int start, int end)
{
    while (start <= end)
    {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotateByK(vector<int> &nums, int k)
{
    int n = nums.size();
    k %= n;
    reverseNum(nums, 0, n - 1);
    reverseNum(nums, 0, k - 1);
    reverseNum(nums, k, n - 1);
}

int main()
{
    vector<int> arr;
    arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotateByK(arr, k);
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}