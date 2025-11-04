//STACK O(1)
#include<bits/stdc++.h>
using namespace std;

void stack_0(){
    stack<int>st;

    st.push(100); //{100}
    st.push(200); //{100,200}
    st.push(300); //{100,200,300}
    st.push(400); //{100,200,300,400}
    st.push(500); //{100,200,300,400,500}
    cout<<"Stack elements:"<<endl;
    stack<int> temp = st;
    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
    }
    cout<<endl;
     
    st.pop(); //{100,200,300,400}
    
    cout<<"TOP:"<< st.top()<<endl; //400
    cout<<"Size:"<<st.size()<<endl; //4
    cout<<"IS Empty:"<<st.empty()<<endl; //0
}

int main(){
    stack_0();
    return 0;
}