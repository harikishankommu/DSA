//GCD-GREATEST COMMON FACTOR
#include<bits/stdc++.h>
using namespace std;
void gcd(int a,int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b; //TC->O(log min(a,b))
        }else{
            b=b%a;
        }
    }if(a==0){
        cout<<b<<endl;
    }else{
        cout<<a<<endl;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    gcd(a,b);
}

/*
//Built in function for  array

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int gcd = a[0];
    for (int i=1;i<n; i++) {
        gcd = __gcd(gcd, a[i]);
    }
    cout<<gcd*n<<endl;
    return 0;
}
*/