#include <bits/stdc++.h>
using namespace std;

// reverse an array using recursion (with one pointer only)
void reverseArray(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverseArray(i + 1, arr, n);
}

// reversing an array with use of two pointers
void reverseArray2(int l, int r, int n, int arr[])
{
    if (l >= r)
        return;
    swap(arr[l],arr[r]);
    reverseArray2(l+1,r-1,n,arr);
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // reverseArray(0, arr, n);
    reverseArray2(0, n-1, n,arr);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}