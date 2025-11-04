//PRIORITY QUEUE
#include <bits/stdc++.h>
using namespace std;

void priorityQueue_0(){
    priority_queue<int>pq;
    pq.push(10); //{10}
    pq.push(20); //{20,10}
    pq.push(30); //{30,20,10}
    pq.push(40); //{40,30,20,10}
    pq.push(50); //{50,40,30,20,10}

    cout<<"Priority Queue elements:"<<endl;
    priority_queue<int>temp=pq;
    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
    }
    cout<<endl;

    pq.pop(); //{40,30,20,10}
    cout<<"Top:"<<pq.top()<<endl; //40
    cout<<"Size:"<<pq.size()<<endl; //4
    cout<<"Is Empty:"<<pq.empty()<<endl; //0
    cout<<endl;
}

void min_heap(){
// for min heap
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(10); //{10}
    pq.push(20); //{10,20}
    pq.push(30); //{10,20,30}
    pq.push(40); //{10,20,30,40}
    pq.push(50); //{10,20,30,40,50}

    cout<<"Priority Queue elements for min heap:"<<endl;
priority_queue<int, vector<int>, greater<int>> temp = pq;
    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
     }
    cout<<endl;

    pq.pop(); //{40,30,20,10}
    cout<<"Top:"<<pq.top()<<endl; //40
    cout<<"Size:"<<pq.size()<<endl; //4
    cout<<"Is Empty:"<<pq.empty()<<endl; //0
}

int main(){
    priorityQueue_0();
    min_heap();
    return 0;
}