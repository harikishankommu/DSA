//VECTORS
#include<bits/stdc++.h>
using namespace std;

void vectors_01(){
    cout<<"CODE-01"<<endl;
    vector<int >v;

    v.push_back(1);
    //v.emplace_back(2);
    v.push_back(2);
    cout<<v[0]<<" "<<v[1]<<endl;
}

void vectors_02(){
    cout<<"CODE-02"<<endl;
    vector<pair<int,int>>v;

    v.push_back({1,2});   //Curly braces are used
    v.emplace_back(4,5);  //normal braces are used
    cout<<v[0].first<<" "<<v[1].second<<endl;
}

void vectors_03(){
    cout<<"CODE-03"<<endl;
    int n,m;
    n=5,m=100;

    vector<int>v(n,m);    //(n,m) n=size of vector AND m=values of vector
    
    for(int i=0;i<n;i++){
         cout<<v[i]<<" ";
    }
    cout<<endl;
}


void vectors_04(){
    cout<<"CODE-04"<<endl;
    int n,m;
    n=5,m=100;

    vector<int>v(n,m);    //(n,m) n=size of vector AND m=values of vector
    vector<int>v1(v);     //v1=v copy the exact vector so it takes O(n)
    for(int i=0;i<n;i++){
         cout<<v[i]<<" ";
    }
    cout<<endl;
}


void vectors_05(){
    cout<<"CODE-5"<<endl;
    vector<int>v(10);
    cout<<"Size of Vector Before:"<<v.size()<<endl;
    v.push_back(1);
    cout<<"Size of Vector After:"<<v.size()<<endl;
}

int main(){
    vectors_01();
    vectors_02();
    vectors_03();
    vectors_04();
    vectors_05();

    return 0;
}