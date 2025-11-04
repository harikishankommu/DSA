// K Different Integers
#include<bits/stdc++.h>
using namespace std;
int k_diff_integers(vector<int>nums,int k){
    int n=nums.size();
     int count=0;
    for(int i=0;i<n;i++){
        unordered_map<int, int> freq;
         int distinct = 0; // track number of distinct elements

        for (int j = i; j < n; j++) {
            if (freq[nums[j]] == 0) {
                distinct++; // new distinct element
            }
            freq[nums[j]]++;

            if (distinct == k) {
                count++;
            }
        }
    }
    return count;

}
int main() {
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<k_diff_integers(nums,k);
    return 0;
}