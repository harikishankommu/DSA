//Longest Substring Without Repeating Characters
#include <bits/stdc++.h>
using namespace std;

void lengthoflongestSubstring(string s) {
    int n = s.size();
    vector<int> hash(256, -1);  // ASCII table
    int left = 0, right = 0, maxLength = 0;

    while (right < n) {
        if (hash[s[right]] != -1 && hash[s[right]] >= left) {
            left = hash[s[right]] + 1;  // move left to one after the last occurrence
        }

        hash[s[right]] = right;  // update last seen index
        maxLength = max(maxLength, right - left + 1);  // update max length
        right++;
    }

    cout << maxLength << endl;
}

int main() {
    string s;
    cin >> s;
    lengthoflongestSubstring(s);
    return 0;
}


//Time: O(n) — each character is processed at most twice.
//Space: O(1) — because we use a fixed-size array of size 256 (ASCII characters).