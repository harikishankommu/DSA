#include<bits/stdc++.h>
using namespace std;
void balanced(int n){
    
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
        
    vector<int> counts;
    int i = 0;
    while(i < n) {
    int current = a[i];
    int cnt = 0;
        while(i < n && a[i] == current) {
                cnt++;
                i++;
            }
            counts.push_back(cnt);
    }
       

    int minCount = *min_element(counts.begin(), counts.end());
    int result = minCount * counts.size();
    cout << result << "\n";

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        balanced(n);
    }
    return 0;
}


// input
// 2 
// 8
// 1 1 0 0 1 1 0 0
// 6
// 1 1 0 0 1 1
// output
// 8
// 6
// Tc=O(N)
// Sc=O(N)
// Approach:
// 1. Count consecutive identical elements and store their counts.
// 2. Find the minimum count among these counts.
// 3. The result is the minimum count multiplied by the number of unique elements.
// 4. Print the result for each test case.
