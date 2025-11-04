#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e7 + 1;
int hashh[MAX];  // Declare globally to avoid stack overflow

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        hashh[arr[i]]++;  // Precompute here directly
    }

    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        cout << hashh[x] << endl;
    }

    return 0;
}

//TC-O(log(n))
//IN storing and fetching