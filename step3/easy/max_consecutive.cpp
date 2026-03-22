#include <bits/stdc++.h>
using namespace std;

int maxConsOnes(vector<int> &nums)
{
    int curr_count = 0;
    int max_count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            curr_count++;
            max_count = max(max_count, curr_count);
        }
        else
        {
            curr_count = 0;
        }
    }
    return max_count;
}

int main()
{

    vector<int> arr;
    arr = {1,1,0,0,1,1,1,0,1,1};
    cout << maxConsOnes(arr);

    return 0;
}