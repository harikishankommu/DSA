#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    //iterate in the map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        //fetch
        cout<<mpp[x]<<endl;
    }
    return 0;
}

//TC-O(log(n))
//IN storing and fetching