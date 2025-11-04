#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // Remove all occurrences of k from the vector a
    

    //auto just saves you from writing the full type of the variable
    
    auto it=remove(a.begin(),a.end(),k); //Pushes all elements equal to k to the end and returns an iterator to the new "end"

    a.erase(it,a.end());                 //Actually deletes the unwanted trailing elements from the vecto
    
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;
}