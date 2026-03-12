#include <bits/stdc++.h>
using namespace std;

// print name n times
void printNTimes(int i, int N)
{
    if (i > N)
        return;

    cout << "raj " << i << " times\n";
    printNTimes(i + 1, N);
}

// print 1 - N linerly
void printLinearly(int i, int N)
{
    if (i > N)
        return;
    cout << i << endl;
    printLinearly(i + 1, N);
}

// print N - 1 linearly
void printOpposite1(int N, int i)
{
    if (N < i)
        return;
    cout << N << endl;
    printOpposite1(N - 1, i);
}

void printOpposite2(int i, int N)
{
    if (i < 1)
        return;
    cout << i << endl;
    printOpposite2(i - 1, N);
}

// print 1 to n with backtracking
void print1toN(int N){
    if (N==0) return;
    print1toN(N-1);
    cout<<N<<endl;
}

void print1toN2(int N){
    if (N==0) return;
    print1toN(N-1);
    cout<<N<<endl;
}

// print N to 1 with backtracking
void printNto1(int i,int N){
    if (i>N) return;
    printNto1(i+1,N);
    cout<<i<<endl;
}

int main()
{

    // printNTimes(1,5);
    // printLinearly(1,10);
    // printOpposite1(10,1);
    // printOpposite2(10, 10);
    // print1toN(10);
    printNto1(1,10);

    return 0;
}