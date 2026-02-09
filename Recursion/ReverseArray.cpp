#include<bits/stdc++.h>
using namespace std;

//with SINGLE VARIABLE
void reverse1(int i,int arr[],int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse1(i+1, arr,n);
}


void reverse2(int l,int r,int arr[]){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    reverse2(l+1,r-1,arr);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //reverse1(0,arr,n);
    //for(int i=0;i<n;i++){
      //  cout<<arr[i]<<" ";
    //}
    cout<<endl;

    reverse2(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
