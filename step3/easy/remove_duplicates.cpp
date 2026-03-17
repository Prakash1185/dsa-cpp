#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main()
{
    vector<int> arr(6);
    arr = {1, 1, 2, 3, 3, 3};
    int ans = removeDuplicates(arr, 6);
    cout << ans;
    return 0;
}