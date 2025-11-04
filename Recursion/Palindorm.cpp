#include<bits/stdc++.h>
using namespace std;

int palindorm(int i,string str,int n){
    if(i>=n/2){
        return true;
    }
     if(str[i]!=str[n-i-1]){
        return false;
     }
    return palindorm(i+1,str,n);
}

int main(){
    string str;
    cin>>str;
    int n=str.length();
   
    cout<<palindorm(0,str,n);
}



