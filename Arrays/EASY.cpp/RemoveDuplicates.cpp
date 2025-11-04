
//Only used when array is sorted

#include<bits/stdc++.h>
using namespace std;

int duplicate(int n,vector<int> &a){
     sort(a.begin(), a.end());                    // Sort the array first -TC=O(nlogn)[increasing order]
     //sort(a.begin(), a.end(), greater<int>());  //[decreasing order]
    int i=0;
    for(int j=1;j<n;j++){ //TC=O(N)
        if(a[j]!=a[i]){
            a[i+1]=a[j];
            i++;
        }
    }
    return i+1;
}

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int result=duplicate(n,a);
    cout<<result<<endl;

    for(int i=0;i<result;i++){
       cout<<a[i]<<" ";
    }
    return 0;
}

//TC= O(nlogn)+O(N)
//SC=O(1)