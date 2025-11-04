#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Hari"<<i<<endl;
    f(i+1,n);
}
int main(){
    int n;
    cin>>n;
    f(1,n);                //Calling the function N times so TC=O(N)
                           //It is storing N function calls in th stack, Space complexity=O(N)
    return 0;
}