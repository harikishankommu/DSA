//OPTIMAL SOULTION

#include<bits/stdc++.h>
using namespace std;
int second_largest(int n,vector<int> &a){
    int largest=a[0];
    int  second_large=-1;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            second_large=largest;
            largest=a[i];
        }
        else if(a[i]<largest && a[i]>second_large){
            second_large=a[i];
        }
    }
    return second_large;
}
int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = second_largest(n, a); 
    cout << result << endl;

    return 0;
}

//TC=O(N)
//SC=O(1)