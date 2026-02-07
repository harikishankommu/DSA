// //Longest Substring Without Repeating Characters

 #include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n=s.length();

        vector<int>freq(256,0);

        int i=0,j=0;
        int ans=0;
        int start=0;

        while(j<n){

            freq[s[j]]++;

            while(freq[s[j]]>1){
                freq[s[i]]--;
                i++;
            }
            //ans=max(ans,j-i+1);
            if (j - i + 1 > ans) {
            ans = j - i + 1;
            start = i;
        }
             j++;
        }
        cout<<ans<<endl;
        cout<<s.substr(start,ans)<<endl;

    }
    return 0;
}

//TC=O(N)
//SC=O(1)
