#include <iostream>
using namespace std;

void insertionSort(int n, int arr[])
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void printArray(int n, int arr[])
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int n = 6;
    int arr[] = {4, 3, 7, 81, 33, 40};

    insertionSort(n,arr);
    printArray(n,arr);

    return 0;
}