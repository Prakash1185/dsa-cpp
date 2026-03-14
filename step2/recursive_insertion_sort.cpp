#include<bits/stdc++.h>
using namespace std;

void rinsertionSort(vector<int> &arr,int i , int n) {
    if (i==n) return;

    int j = i;
    while (j > 0 && arr[j-1] > arr[j]) {
        swap(arr[j],arr[j-1]);
        j--;
    }

    rinsertionSort(arr,i+1,n);
}

int main()
{
    vector<int> arr(10);
    arr = {1,3,2,11,42,9,0,44,32,2};
    rinsertionSort(arr,0,10);
    for(int a : arr) {
        cout<< a << " ";
    }
    return 0;
}