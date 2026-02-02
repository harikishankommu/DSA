#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<int>topKFrequent(vector<int>&nums, int k) {
        
        unordered_map<int,int>freq;

        for(auto num:nums){
            freq[num]++;
        }

        priority_queue<pair<int,int>>pq;

        for(auto it:freq){
            pq.push({it.second,it.first});
        }

        vector<int>result;
        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }
        return result;
    }
};

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    Solution sol;
    vector<int>topK=sol.topKFrequent(nums,k);

    for(auto num:topK){
        cout<<num<<" ";
    }
    cout<<endl;

    return 0;
}

//TC=O(Nlogk)
//SC=O(N)