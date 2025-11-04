#include<bits/stdc++.h>
using namespace std;


class Node {
public:
    int data;     // data = integer
    Node* next;   // next = pointer to node

public:
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
};

Node* arr2LL(vector<int>&arr){
    if(arr.empty()){
        return nullptr;
    }
    Node* head=new Node(arr[0],nullptr);
    Node* mover=head;

    for(int i=0;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int printLL(Node*head){

}

void delete_kth_val(Node*head,int k){
}
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node*head=arr2LL(arr);
    delete_kth_val(head);
    return 0;
}