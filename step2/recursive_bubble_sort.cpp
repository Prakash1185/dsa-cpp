#include <bits/stdc++.h>
using namespace std;

void rbubbleSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    for (int j = 0; j <= n - 2; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }

    rbubbleSort(arr, n - 1);
}

int main()
{
    vector<int> arr(7);
    arr = {3, 5, 6, 3, 6, 9, 11};
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout<<endl;
    rbubbleSort(arr, 7);

    for (int y : arr)
    {
        cout << y << " ";
    }

    return 0;
}