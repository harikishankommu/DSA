#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0; //for counting number of digits in n
    while(n>0){
        int lastdigit=n%10;
        count+=1;
        n=n/10;
    }
    cout<<count<<endl;

}

//Suming the given number repeadly until the single digit is obtained