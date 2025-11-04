//Bineary Subarray Sum

#include<bits/stdc++.h>
using namespace std;
int Bineary_subarray_sum(vector<int>& arr, int goal){
    int n = arr.size();

   int count=0;
 

    for(int i=0;i<n;i++){
        int sum=0;
        string subarray="";
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
           // subarray=subarray + to_string(arr[j]);
            if(sum==goal){
                count++;
            }
        }
    }
    return count;
}

//Optimal soln(Two pointers)
int B_S_sum(vector<int>& arr, int goal){
    int n=arr.size();
    int l=0,r=0,count=0,sum=0;

    if(goal<0){
        return 0;
    }
    while(r<n){
        sum=sum+arr[r];
        while(sum>goal){
            sum=sum-arr[l];
            l++;
        }
        count=count+(r-l+1);
        r++;
    }
    return count;
}

int numSubarraysWithSum(vector<int>& arr, int goal) {
    return B_S_sum(arr, goal) - B_S_sum(arr, goal - 1);
}

//NICE-ARRAY(similar question but deals odd and even numbers)
//converting the odd numbers are 1 and even numbers as 0
 int nice_array(vector<int>&nums,int k){
         int n=nums.size();
        int l=0,r=0,count=0,sum=0;
        while(r<n){
            sum=sum+(nums[r])%2;
            while(sum>k){
                sum=sum-(nums[l])%2;
                l++;
            }
            count=count+(r-l+1);
            r++;
        }
        return count;

    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return nice_array(nums,k)-nice_array(nums,k-1);   
    }



int main() {
    int n,goal;
    cin>>n>>goal;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //int result = Bineary_subarray_sum(arr, goal);
    int result =  numSubarraysWithSum(arr, goal);
    cout << result << endl;
    return 0;
}

//TC-O(N)
//SC-O(N)


