#include<bits/stdc++.h>
using namespace std;

//TC=O(N)
void  Prime_num(int n){
    int count=0;
    for(int i=1;i<=n;i++){  
        if(n%i==0){
            count++;
        }
    }if(count==2){
            cout<<"Yes it is prime number"<<endl;
        }else{
            cout<<"No it is not a prime number"<<endl;
        }
}

//TC=O(sqrt(N))
void Prime_num2(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){  
        if(n%i==0){
            count++;
            if(i!=n/i){
                count++;
            }
        }
    }if(count==2){
            cout<<"Yes it is prime number"<<endl;
        }else{
            cout<<"No it is not a prime number"<<endl;
        }
}
int main(){
    int n;
    cin>>n;
    Prime_num(n);
    Prime_num2(n);
}