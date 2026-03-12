#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // PRE-COMPUTE
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // iterate over map
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    int number;
    cin >> number;

    // fetch
    cout << mpp[number];

    return 0;
}