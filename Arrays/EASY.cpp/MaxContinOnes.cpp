#include<bits/stdc++.h>
using namespace std;

//CODE-01
int max_count(int n,const vector<int>&a){
    int maxi=0;
    int count=0;
    for(int i=0;i<n;i++){
         if(a[i]==1){
            count++;
            maxi=max(count,maxi); 
         }else{
            count=0;
         }
    }
    return maxi;
}

//CODE-02
int max_count2(int n,const vector<int>&a){
    int maxi=1;
    int count=1;
    for(int i=1;i<=n;i++){
         if(a[i]==a[i-1]){
            count++;
            maxi=max(count,maxi); 
         }else{
            count=1;
         }
    }
    return maxi;
}

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result=max_count(n,a);
    int result2=max_count2(n,a);

    cout<<result2<<endl;
    return 0;
}