// Maximum Sum with K Picks
#include<bits/stdc++.h>
using namespace std;
int max_sum(int n,vector<int>&nums,int k){
    int l_sum=0,r_sum=0,maxsum=0;

    //sum of first k elements
    for(int i=0;i<k;i++){
        l_sum=l_sum+nums[i];
    }
      maxsum=l_sum;
    //sum of last k elements by decreasing one element from left and adding one element from right
    int r_index=n-1;
    for(int i=k-1;i>=0;i--){
        l_sum=l_sum-nums[i];
        r_sum=r_sum+nums[r_index];
        r_index--;
        maxsum=max(maxsum,l_sum+r_sum);
    }
    return maxsum;

    }

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<max_sum(n,nums,k)<<endl;
    
    return 0;
}