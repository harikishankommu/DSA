//TC=O(N)
//SC=O(N)
#include<bits/stdc++.h>
using namespace std;

void f(int i,int n){  //Linearly Backtracking[Reverse] Order(1-N)
    if(i>n){
        return;       //Base Case
    }
     f(i+1,n);
     cout<<i<<" ";
    
}

void f1(int i,int n){ //Linearly Backtracking[CORRECT]  Order(N-1)
    if(i<1){
        return;      //stops further recursive calls when i becomes less than 1.(Base case)
    }
    f1(i-1,n);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;
    f(1,n);
    f1(n,n);
    return 0;
}