//LONGEST  CONSECUTIVE SEQUENCE
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

       
       if (nums.empty()) return 0;
        //unique elements and  sorted array
        set<int>s(nums.begin(),nums.end());
        // convert set to vector
        vector<int>v(s.begin(),s.end());
        int curr=1;
        int maxi=1;
        for(int i=1;i<v.size();i++){
             if((v[i]-v[i-1])==1){
                curr++;
             }else{
                curr=1;
             }
             maxi=max(maxi,curr);
        }
        cout<< maxi<<endl;
       
       
    }
    return 0;
}