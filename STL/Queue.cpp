//QUEUE FIFO(First In First Out)
#include <bits/stdc++.h>
using namespace std;

void Queue_0(){
    queue<int>q;
    q.push(10); //{10}
    q.push(20); //{10,20}
    q.push(30); //{10,20,30}
    q.push(40); //{10,20,30,40}
    q.push(50); //{10,20,30,40,50}

    cout<<"Queue elements:"<<endl;
    queue<int>temp=q;
    while(!temp.empty()){
        cout<<temp.front()<<endl;
        temp.pop();
    }
    cout<<endl;

    q.pop(); //{20,30,40,50}
    cout<<"Front:"<<q.front()<<endl; //20
    cout<<"Back:"<<q.back()<<endl; //50
    cout<<"Size:"<<q.size()<<endl; //4
    cout<<"Is Empty:"<<q.empty()<<endl; //0
}

int main(){
    Queue_0();
    return 0;
}