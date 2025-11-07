// Rearrange Array Elements by Sign
#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>a;
        vector<int>b;

        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                a.push_back(nums[i]);
            }else{
                b.push_back(nums[i]);
            }
        }
        vector<int> result;
        int i = 0, j = 0;

       
        while (i < a.size() && j < b.size()) {
            result.push_back(a[i++]); // positive first
            result.push_back(b[j++]); // then negative
        }

        // If any remain (in case unequal counts)
        while (i < a.size()) result.push_back(a[i++]);
        while (j < b.size()) result.push_back(b[j++]);

        return result;
        
    }


int main() {
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>result=rearrangeArray(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    
    return 0;
}
