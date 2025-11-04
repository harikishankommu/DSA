//Substring with characters a,b,c

#include<bits/stdc++.h>
using namespace std;
int threechar(string s){
    int n=s.size();
    int count=0;
    for(int i=0;i<n;i++){
        string sub="";
        for(int j=i;j<n;j++){
            sub=sub+s[j];
            bool hasA=false, hasB=false, hasC=false;
            for(char ch:sub){
                if(ch=='a') hasA=true;
                if(ch=='b') hasB=true;
                if(ch=='c') hasC=true; 
            }
            if(hasA && hasB && hasC){
                count++;
            }
        }
    }
    return count;

}
int main() {
    string s;
    cin>>s;
    int result=threechar(s);
    cout<<result<<endl;
    return 0;
}