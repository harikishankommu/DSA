#include<bits/stdc++.h>
using namespace std;
void merge_arr1_arr2(vector<int>&arr1,vector<int>&arr2,int n,int m){
    arr1.resize(n+m);
    for(int i=0;i<m;i++){
        arr1[n+i]=arr2[i];
    }
    sort(arr1.begin(),arr1.end());

    for(int x:arr1){
        cout<<x<<" ";
    }
}
int main() {
    int n,m;
    cin>>n>>m;
    vector<int>arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    vector<int>arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    merge_arr1_arr2(arr1,arr2,n,m);

    return 0;
}