#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1; //Base case
    }
    return n*factorial(n-1); //Recursive case
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}