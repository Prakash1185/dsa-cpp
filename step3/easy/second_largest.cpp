#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &a, int n)
{
    int largest = a[0];
    int slargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > largest)
        {
            slargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > slargest)
        {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondSmallest(vector<int> &a, int n)
{
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < smallest)
        {
            ssmallest = smallest;
            smallest = a[i];
        }
        else if (a[i] != smallest && a[i] < ssmallest)
        {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

int main()
{
    vector<int> arr(6);
    arr = {1, 3, 22, 42, 9, 9};
    int sl = secondLargest(arr, 6);
    cout<<sl;
    cout << endl;
    int ss = secondSmallest(arr, 6);
    cout<<ss;
    return 0;
}