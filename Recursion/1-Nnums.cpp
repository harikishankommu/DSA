//TC=O(N)
//SC=O(N)
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){  //Correct Order(1-N)
    if(i>n){
        return;       //Base Case
    }
    cout<<i<<" ";
    f(i+1,n);
    
}

void f1(int i,int n){ //Reverse Order(N-1)
    if(i<1){
        return;      //stops further recursive calls when i becomes less than 1.(Base case)
    }
    cout<<i<<" ";
    f1(i-1,n);
}

int main(){
    int n;
    cin>>n;
    f(1,n);
    f1(n,n);
    return 0;
}