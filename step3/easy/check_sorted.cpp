#include <bits/stdc++.h>
using namespace std;

int isSorted(vector<int> &arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr(3);
    arr = {1, 2, 3};
    cout << isSorted(arr, 3);
    return 0;
}