//Longest Common Substring
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    int l = 0, r = 0, maxlen = 0,start_index=0;
    while (r < n) {
        if (s[l] == s[r]) {
            r++;
        } else {
           if(maxlen<r-l){
            maxlen=r-l;
            start_index=l;
           }
            l = r;          // Reset start of window to current r
            // r remains unchanged—so the next comparison always stays correct
        }
    }
   if(maxlen<r-l){
       maxlen=r-l;
       start_index=l;
   } // Account for trailing sequence till string end
    cout << maxlen << endl;
    cout << s.substr(start_index, maxlen);
    return 0;
}

// TC = O(n)
// SC = O(1)