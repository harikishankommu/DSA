#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e7 + 1;
int hashh[MAX];  // Declare globally to avoid stack overflow

int main() {
    string str;
    cin >> str;
    int n=str.length();
    
    int hashh[26]={0};
    for(int i = 0; i < n; i++) {
        hashh[str[i]-'a']++;  // Precompute here directly
    }

    int t;
    cin >> t;
    while(t--) {
        char ch;
        cin >> ch;
        cout << hashh[ch-'a'] << endl;
    }

    return 0;
}


//TC-O(log(n))
//IN storing and fetching

//for lower case letter use (hashh[str[i]-'a']++;)

//for upper case letter use (hashh[str[i]-'A']++;)

//for  all characters use (hashh[str[i]++;)
 