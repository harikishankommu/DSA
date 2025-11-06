//Minimum Add to Make Parentheses Valid
#include<bits/stdc++.h>
using namespace std;
int minAddToMakeValid(string s) {
        int n = s.size();
        int balance = 0;
        int add = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') balance++;
            else {
                if (balance > 0) balance--;
                else add++;
            }
        }
        return add + balance;
    }
int main() {
    string s;
    cin>>s;
    cout<<minAddToMakeValid(s);
    return 0;
}

/*
Example 1:

Input: s = "())"
Output: 1
Example 2:

Input: s = "((("
Output: 3
*/