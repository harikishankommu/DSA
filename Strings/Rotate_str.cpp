#include<bits/stdc++.h>
using namespace std;
bool rotate_string(string s,string goal){
    if(s.size()!= goal.size()){
        return false;
    }

    
    string doubled =s+s;
    if(doubled.find(goal)!=string::npos){
        return true;
    }else{
        return false;
    }
}
int main() {
    string s,goal;
    cin>>s>>goal;
    cout<<rotate_string(s,goal);
    return 0;
}
