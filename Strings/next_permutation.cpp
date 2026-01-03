#include<bits/stdc++.h>
using namespace std;
void nextpermutation(string &s){

    sort(s.begin(),s.end());//sorting the string in lexicographical order

    vector<string>ans;      //storing all the permutations
    //generating all the permutations
    do{ 
        //storing the current permutation                    
        ans.push_back(s);

    }while(next_permutation(s.begin(),s.end())); //using inbuilt function to generate next permutation

    for( auto &x:ans){ 
       cout<<x<<" ";
    }
}
int main() {
    string s;
    cin>>s;
    nextpermutation(s);

    return 0;
}