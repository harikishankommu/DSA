#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

//step-01 checks if the array contains or not
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j=i;
            break;
        }
    }
     // If no zero is found, print array as is
    if (j == -1) {
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        return 0;
    }
 //step-02 here it sswaps the zero value with non-zero value  
    for(int i=j+1;i<n;i++){
         if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }   
    }

     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}