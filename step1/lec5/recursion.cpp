#include<bits/stdc++.h>
using namespace std;

void f(){
    cout<<"1";
    f();
}

// recursion with base condition
// base -> condition used to stop recursion 
// there can be one or multiple base condition
int cnt = 0;
void f2(){
    if(cnt==3) return;
    cout<<cnt<<endl;
    cnt++;
    f2();

}

int main(){

    // f();
    f2();

    return 0;
}