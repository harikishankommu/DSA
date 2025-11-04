#include <bits/stdc++.h>
using namespace std;

// Function to find value at nCr (single element in Pascal's Triangle)
int find_value_in_pascal_triangle(int n, int r) {
    long long res = 1;
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

// Function to generate a single row of Pascal's Triangle
vector<int> generate_row(int row) {
    vector<int> current_row;
    long long res = 1;
    current_row.push_back(1); // first element always 1

    for (int col = 1; col < row; col++) {
        res = res * (row - col);
        res = res / col;
        current_row.push_back(res);
    }
    return current_row;
}

// Function to generate the entire Pascal's Triangle
vector<vector<int>> generate_triangle(int n) {
    vector<vector<int>> triangle;
    for (int i = 1; i <= n; i++) {
        triangle.push_back(generate_row(i));
    }
    return triangle;
}

int main() {
    int n, r, c;
    cout << "Enter n, r, and c: ";
    cin >> n >> r >> c;

    // 1️⃣ Find value at position (n, r)
    cout << "Value at position (" << n << ", " << r << ") = "
         << find_value_in_pascal_triangle(n, r) << endl;

    // 2️⃣ Print nth row
    cout << "Row " << n << ": ";
    vector<int> row = generate_row(n);
    for (int val : row) cout << val << " ";
    cout << endl;

    // 3️⃣ Print full triangle
    cout << "\nPascal's Triangle up to " << n << " rows:\n";
    vector<vector<int>> triangle = generate_triangle(n);
    for (auto each_row : triangle) {
        for (int val : each_row) cout << val << " ";
        cout << endl;
    }

    return 0;
}
