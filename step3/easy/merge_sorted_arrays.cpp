#include <bits/stdc++.h>
using namespace std;

void mergeSorted(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (j >= 0)
    {
        if (i >= 0 && nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            k--;
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
}

int main()
{
    vector<int> arr1, arr2;
    arr1 = {1, 2, 3, 0, 0, 0};
    arr2 = {3, 5, 6};
    int m = 3;
    int n = 3;
    mergeSorted(arr1, arr2, m, n);
    for (int x : arr1)
    {
        cout << x << " ";
    }
    return 0;
}