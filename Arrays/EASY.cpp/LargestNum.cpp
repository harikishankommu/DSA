//OPTIMAL SOLUTION

#include <bits/stdc++.h>
using namespace std;

int largest_num(int n, vector<int> &a) {
    int largest = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);  
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = largest_num(n, a); 
    cout << result << endl;

    return 0;
}

//TC-O(N)
//SC=O(1)