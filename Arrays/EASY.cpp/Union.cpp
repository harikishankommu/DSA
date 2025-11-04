#include <bits/stdc++.h>
using namespace std;

vector<int> Union(int n1, int n2, vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> union_a;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            if (union_a.empty() || union_a.back() != a[i])
                union_a.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j]) {
            if (union_a.empty() || union_a.back() != b[j])
                union_a.push_back(b[j]);
            j++;
        }
        else { // a[i] == b[j]
            if (union_a.empty() || union_a.back() != a[i])
                union_a.push_back(a[i]);
            i++;
            j++;
        }
    }

    while (i < n1) {
        if (union_a.empty() || union_a.back() != a[i])
            union_a.push_back(a[i]);
        i++;
    }

    while (j < n2) {
        if (union_a.empty() || union_a.back() != b[j])
            union_a.push_back(b[j]);
        j++;
    }

    return union_a;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a(n1), b(n2);

    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int j = 0; j < n2; j++) cin >> b[j];

    vector<int> result = Union(n1, n2, a, b);

    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}
