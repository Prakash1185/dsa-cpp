#include <bits/stdc++.h>
using namespace std;

// this will rotate the array from back to front
void rotateByOne(vector<int> &nums, int n)
{
    int temp = nums[0];
    for (int i = 0; i < n - 1; i++)
    {
        nums[i] = nums[i + 1];
    }
    nums[n - 1] = temp;
}

// this code will roate the array from front to back
void roateArrayOne(vector<int> &nums, int n)
{
    int temp = nums[n-1];
    for(int i = n-1;i>0;i--){
        nums[i] = nums[i-1];
    }
    nums[0] = temp;
}

int main()
{
    vector<int> arr(5);
    arr = {1, 2, 3, 4, 5};
    for (int x : arr)
    {
        cout << x << " ";
    }
    // rotateByOne(arr, 5);
    roateArrayOne(arr,5);
    cout << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}