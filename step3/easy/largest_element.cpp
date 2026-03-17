#include <bits/stdc++.h>
using namespace std;

int findLargest(vector<int> &arr)
{
    int ans = arr[0];
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (ans < arr[i + 1])
        {
            ans = arr[i + 1];
        }
    }
    return ans;
}

int main()
{
    vector<int> arr(5);
    arr = {1, 4, 5, 11, 0};
    cout << findLargest(arr);
    return 0;
}