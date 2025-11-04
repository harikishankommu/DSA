//ITERATORS
#include<bits/stdc++.h>
using namespace std;

/*void iterators_01(){
    vector<int>::iterator it=v.begin();
    it++;
    cout<*(it)<<" ";

    it =it+2;
    cout<<*(it)<<" ";

    vector<int>::iterator it=v.end();
    vector<int>::iterator it=v.rend();
    vector<int>::iterator it=v.rbegin();
}
    */

void iterator_02(){
    vector<int>v={1,2,3,4,5};
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
}

void iterator_03(){
    vector<int>v={1,2,3,4,5};
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
}

void interator_04(){
    vector<int>v={1,2,3,4,5};
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

void erase_05(){
    vector<int>v={1,2,3,4,5};
        v.erase(v.begin()+1);
        for(auto it:v){
        cout<<it<<" ";
        }
        cout<<endl;
}

void erase_06(){
    vector<int>v={10,20,30,40,50};
    v.erase(v.begin()+2,v.begin()+4);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

void insertion_07(){
    vector<int>v={10,20,30,40,50};
    v.insert(v.begin(),2,400); //insert 2 400 at the beginning
    v.insert(v.end(),2,1000);  //insert 2 1000 at the end
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

void size_08(){
    vector<int>v={10,20,30,40,50};
    cout<<v.size()<<endl; //size=5
    v.push_back(60);      //after pushing 60 size=6
    cout<<v.size()<<endl;
    v.pop_back();         //after poping 60 size=5
    cout<<v.size()<<endl;
}

void swap_09(){
    vector<int>v1={1,2,3,4,5};
    vector<int>v2={10,20,30,40,50};

    v1.swap(v2);

    for(auto it:v1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:v2){
        cout<<it<<" ";
    }
    cout<<endl;
}

void clear(){
    vector<int>v={1,2,3,4,5};
    v.clear();
    cout<<v.size()<<endl;
}
int main(){
    iterator_02();
    iterator_03();
    interator_04();

    erase_05();
    erase_06();

    insertion_07();

    size_08();

    swap_09();

    clear();
    return 0;
}