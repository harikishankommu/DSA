#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 3, 5, 7};
    s.insert(4);

    int target = 4;
    int index = distance(s.begin(), s.find(target)); // O(log n) for find, O(n) for distance
    cout << "Index of " << target << " is: " << index << endl;

     for (int x : s)
        cout << x << " ";
     return 0;
}