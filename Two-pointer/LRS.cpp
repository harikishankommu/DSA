//Longest Repeatinng SUbstring
#include <bits/stdc++.h>
using namespace std;

// Function to find length of the longest substring that can be made
// of repeating characters after replacing at most 'k' characters.
int Longest_Repeating_Character_Replacement(string s, int k) {
    int n = s.size();
    int l = 0, r = 0;               // Sliding window pointers
    int maxlen = 0;                 // Stores maximum length found so far
    int maxfreq = 0;                // Highest frequency of any single character in the current window
    vector<int> hash(26, 0);        // Frequency array for uppercase A-Z (26 characters)

    while (r < n) {
        // Step 1: Include the new character into the window
        hash[s[r] - 'A']++;

        // Step 2: Track the highest frequency character count in the window
        maxfreq = max(maxfreq, hash[s[r] - 'A']);

        // Step 3: Current window length
        int length_substring = r - l + 1;

        // Step 4: If more than 'k' replacements needed → shrink the window
        // Replacements needed = total length - most frequent char count
        if (length_substring - maxfreq > k) {
            hash[s[l] - 'A']--; // Remove leftmost char from window
            l++;                // Move window start forward
        }

        // Step 5: Update max length after adjustments
        maxlen = max(maxlen, r - l + 1);

        // Step 6: Move window end forward
        r++;
    }
    return maxlen;
}

int main() {
    string s;
    cin >> s; 
    int k;
    cin >> k; 
    int result = Longest_Repeating_Character_Replacement(s, k);
    cout << result << endl;

    return 0;
}

//Tc=O(N)
//Sc=O(26)


//1.adding elements to the window
//2.find the maxfreq in the current window
//3.shrinking the window if (length_substring - maxfreq > k)
//4.updating the maxlen
//5.moving the right pointer forward
//6.printing the maxlen