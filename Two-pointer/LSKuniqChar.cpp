//Longest Substring with K Unique Characters
#include<bits/stdc++.h>
using namespace std;
int longest_Substring_with_atleast_k_unique_char(string s,int k){
    int n=s.size();
    int maxlen=0,l=0,r=0;
    unordered_map<char,int>hash;

    while(r<n){
        hash[s[r]]++;
        if(hash.size()>k){
            hash[s[l]]--;
            if(hash[s[l]]==0){
                hash.erase(s[l]);
            }
            l++;
        }
        if(hash.size()<=k){
             maxlen=max(maxlen,r-l+1);
        }
     r++;
    }
    return maxlen;
}
int main() {
    string s;
    cin>>s;
    int k;
    cin>>k;

    cout<<longest_Substring_with_atleast_k_unique_char(s,k);
    return 0;
}