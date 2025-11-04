#include<bits/stdc++.h>
using namespace std;

//variation check-01
void k_times1(int n,vector<int>&a){
    int count=0,position=-1; //position(index) is from where the array is not in sorted order
     for(int i=0;i<n;i++){
        cout<<a[i]<<"->"<<a[(i+1)%n]<<endl;
        if(a[i]>a[(i+1)%n]){
            count++;
            position=(i+1)%n;
        }
    }
    if (count > 1) {
        return;
    }else {
    for (int i = 0; i < n; i++) {
        cout << a[(position + i) % n] << " ";
    }
    cout << endl;
   }

}


//variation check-02

bool k(int n,vector<int>& a){
    int n = nums.size();
        int count = 0;
        
        // Check if the array is non-decreasing
        for (int i = 1; i < n; i++)
            if (nums[i - 1] > nums[i])
                count++;
        
        // Check if the last element is greater than the first element
        if (nums[n - 1] > nums[0])
            count++;
        
        // If the count of violations is less than or equal to 1, return true
        return count <= 1;
}


//variation check-03

bool k_times2(int n, vector<int>& a) {
    int count = 0, position = -1;

    for (int i = 0; i < n; i++) {
        if (a[i] > a[(i + 1) % n]) {
            count++;
            position = (i + 1) % n;
        }
    }

    if (count > 1) {
        return false;
    }

    // Rotate to sorted order
    vector<int> temp(n);
    for (int i = 0; i < n; i++) {
        temp[i] = a[(position + i) % n];
    }

    a = temp;

    // Check sorted (non-decreasing)
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i-1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool result = k_times2(n, a);

    if (result) {
        cout << "true\n";
    } else {
        cout << "false\n";
    }

    return 0;
}