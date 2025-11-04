#include <bits/stdc++.h>
using namespace std;

vector<int> Intersection(int n1, int n2, vector<int>& a, vector<int>& b) {
    int i = 0, j = 0;
    vector<int> Intersection_a;

    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            i++;
        }
        else if (a[i] > b[j]) {
            j++;
        }
        else { // a[i] == b[j]
            Intersection_a.push_back(a[i]);
            i++;
            j++;
        } 
    }

    return Intersection_a;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> a(n1), b(n2);

    for (int i = 0; i < n1; i++) cin >> a[i];
    for (int j = 0; j < n2; j++) cin >> b[j];

    vector<int> result = Intersection(n1, n2, a, b);

    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}
