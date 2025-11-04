#include <bits/stdc++.h>
using namespace std;

int Missing_num(int n, const vector<int>& a) {
    int XOR1 = 0;
    for (int i = 1; i <= n; i++) {
        XOR1 =XOR1^ i;
    }
    int XOR2 = 0;
    for (int num : a) {
        XOR2 =XOR2^ num;
    }
    return XOR1 ^ XOR2;
}

int main() {
    int n;
    cin >> n;  // Total numbers should be from 1 to n
    vector<int> a(n - 1);  // Array size should be n-1

    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }

    int result = Missing_num(n, a);
    cout << result << endl;

    return 0;
}
