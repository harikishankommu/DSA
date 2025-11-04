/*
#include<bits/stdc++.h>
using namespace std;
vector<int> rotate(int n,int k,vector<int>&a){
    k=k%n;
    while(k--){
    int temp=a[0];
    for(int i=0;i<n;i++){
        a[i-1]=a[i];
    }
    a[n-1]=temp;
    }
    return a;
  
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //CODE-01
    cout<<"CODE-01"<<endl;
    vector<int> result = rotate(n,k,a);

    for(int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> rotate1(int n, int k, vector<int>& a) {
    k = k % n;

    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());
    reverse(a.begin(), a.end());

    return a;
}

int main() {
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> result = rotate1(n, k, a);

    cout << "Rotated array: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
