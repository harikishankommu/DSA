//PAIRS
#include<bits/stdc++.h>
using namespace std;

// for two integers
void pairs_01(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;
}

void pairs_02(){
    pair<int,pair<int,int>>p={1,{2,3}};
    cout<<p.first<<" "<<endl<<p.second.first<<" "<<p.second.second<<endl;
}


void pairs_03_arr(){
    pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[2].first<<endl;
}
int main(){
    pairs_01();
    pairs_02();
    pairs_03_arr();
}