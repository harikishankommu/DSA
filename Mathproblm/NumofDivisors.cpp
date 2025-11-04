#include<bits/stdc++.h>
using namespace std;

//TC= O(N)
void Divisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

//TC=O(sqrt(n))+O(n*logn)
void Divisors1(int n){
    vector<int>list;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            list.push_back(i);
            if((n/i)!=i){
                list.push_back(n/i); 
            }
        }
    }
    sort(list.begin(),list.end());
    for(auto it :list){
        cout<<it<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    Divisors(n);
    Divisors1(n);
}

