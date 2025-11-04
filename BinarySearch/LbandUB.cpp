//LOWER BOUND AND UPPER BOUND

#include <bits/stdc++.h>
using namespace std;

// Lower Bound: first index where arr[idx] >= x
int lowerBound(vector<int>& arr, int x) {
    int low = 0, high = arr.size(); 
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low; 
}

// Upper Bound: first index where arr[idx] > x
int upperBound(vector<int>& arr, int x) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= x) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low; 
}

void findLowerAndUpperBound(vector<int>& arr, int x) {
    // Lower Bound → first index where arr[idx] >= x
    int LB = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
    cout<<LB<<endl;

    // Upper Bound → first index where arr[idx] > x
    int UB = upper_bound(arr.begin(), arr.end(), x) - arr.begin();
    cout<<UB<<endl;
}


int man(){
    int n,x;
    cin>>n>>x;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<findLowerAndUpperBound(arr, x);
}