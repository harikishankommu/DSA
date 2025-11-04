#include<bits/stdc++.h>
using namespace std;
int linear_search(int n,int x,const vector<int>&a){
    for(int i=0;i<n;i++){
        if(a[i]==x){
           return i;
        }
    }
    return -1;

}
int main() {
    int n;
    cin>>n;
    int x;
    cin>>x;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int result=linear_search(n,x,a);
    cout<<result;
    
    return 0;
}