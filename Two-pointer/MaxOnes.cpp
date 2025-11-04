// Maximum Consecutive Ones
#include<bits/stdc++.h>
using namespace std;
void max_ones(vector<int> &nums,int k,int n){
    int l=0,r=0,maxlen=0,zero_count = 0;
    while(r<n){
        if(nums[r]==0){
            zero_count++;
        }
        while(zero_count>k){
            if(nums[l]==0){
                zero_count--;
            }
             l++;
        }
            int len= r - l + 1;
            maxlen= max(maxlen,len);
            r++;
    }
   cout<<maxlen<<endl;
}
int main() {
    int n,k;
    cin>>n>>k;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    max_ones(nums, k, n);
    return 0;
}