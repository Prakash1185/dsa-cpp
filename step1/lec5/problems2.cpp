#include <bits/stdc++.h>
using namespace std;

// sum of n numbers (parameterised way)
void sumNnumbers(int i, int sum)
{
    if (i < 1)
    {
        cout << sum;
        return;
    }
    sumNnumbers(i - 1, sum + i);
}

// sum of n numbers (funtional way)
int sumOfN(int N)
{
    if (N == 0)
        return 0;
    return N + sumOfN(N - 1);
}

// Factorial of a number
// functional way
int factorial(int N)
{
    if (N == 0)
        return 1;
    return N * factorial(N - 1);
}

// parameterized way
void factoialN(int i, int fact)
{
    if (i == 0)
    {
        cout << fact;
        return;
    }
    factoialN(i - 1, fact * i);
}

int main()
{

    // sumNnumbers(3,0);
    // cout<<(sumOfN(3));

    cout << (factorial(3)) << endl;
    factoialN(3, 1);

    return 0;
}