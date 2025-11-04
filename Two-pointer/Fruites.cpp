// Fruits in a Basket
#include<bits/stdc++.h>
using namespace std;
void function(){
}
int main() {
    int n,k;
    cin>>n>>k;
    int maxlen=0,index=0;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    for(int i = 0; i < n; i++) {
        set<int>st;
        for(int j = i; j < n; j++) {
            st.insert(nums[j]);
            if (st.size() <= k) {
              if (j - i + 1 > maxlen) {
                maxlen = j - i + 1;
                index = i;
               }
            }else{
                break;
            }
        }
    }
        cout<<maxlen<<endl;
        for(int i=index;i<index+maxlen;i++){
            cout << nums[i]<< " ";
        }
        cout<<endl;

    return 0;
}