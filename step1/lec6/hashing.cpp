#include <bits/stdc++.h>
using namespace std;

// initialized globally
int hashh[10000000]; // be default it takes 0 and do not take garbage value

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // precompute
    // initialized in main()
    // int hash[10000] = {0};
    for (int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1;
    }

    int number;
    cout << "Enter the number : ";
    cin >> number;
    // fetch
    cout << hashh[number];

    return 0;
}