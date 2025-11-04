#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n=str.length();
    map<char,int>mpp;
    for(int i=0;i<n;i++){
        mpp[str[i]]++;
    }

    //iterate in the map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int t;
    cin>>t;
    while(t--){
        char ch;
        cin>>ch;
        //fetch
        cout<<mpp[ch]<<endl;
    }
    return 0;
}


//TC-O(log(n))
//IN storing and fetching