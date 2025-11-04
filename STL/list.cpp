#include<bits/stdc++.h>
using namespace std;
//LISTS
void list(){
    list<int>ls;
    ls.push_back(2); //{2}
    ls.emplace_back(4);//{2,4}
    ls.push_front(1); //{1,2,4}
    ls.emplace_front();{2,4};

    //rest functionn are same as vector
    //begin,end,rbegin,rend,clear,empty,erase,insert,pop_back,pop_front,remove,reverse,size,sort,swap
}

//DEQUE
void deque(){
    deque<int> dq={10,20,30,40,50};
    dq.push_back(1); //{1}
    dq.push_front(2); //{2,1}
    dq.emplace_back(3); //{2,1,3}
    dq.emplace_front(4); //{4,2,1,3}

    dq.pop_back(); //{4,2,1}
    dq.pop_front(); //{2,1}

    dq.back(); //1
    dq.front(); //2

    //rest is same 
}

//STACK

void stack_0(){
    stack<int>st{10,20,30,40,50};

    st.push(1); //{1}
    for(auto it:st){
        cout<<it<<" ";
    }
    st.push(2); //{1,2}
    st.push(3); //{1,2,3}

    st.pop(); //{1,2}
    st.top(); //2
    st.size(); //2
    st.empty(); //0
}

int main(){
    stack_0();
    return 0;
}