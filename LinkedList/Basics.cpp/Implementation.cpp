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

// converting array to Linked List
Node* arr2LL(vector<int>& arr) {
    if (arr.empty()) {
        return nullptr;
    }
    Node* head = new Node(arr[0], nullptr);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// function to print the linked list (just matching the call in main)---TRAVERSAL OF LINKEDLIST
void printLL(Node* head) {
    Node* temp =head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout<<"Nullptr";
    cout << endl;  
}


//LENGTH OF THE LINKED LIST

int lengthLL(Node*head){
    int length=0;
    Node*temp=head;
    while(temp!=nullptr){
        temp=temp->next;
        length++;
    }
    return length;
}

//FINDING THE VALUE
int  findthevalue(Node*head,int value){
    Node*temp=head;
    while(temp!=nullptr){
        if(temp->data==value) return 1;
        temp=temp->next;
    }
    return 0;
}
    

//DELETING HEAD NODE OF LINKED LIST

Node* delete_head(Node*head){
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}

//DELETING TAIL NODE  OF LINKED LIST

Node*delete_tail(Node*head){
    if(head==nullptr ||head->next==nullptr){
        return nullptr;
    }
        Node*temp=head;
        while(temp->next->next!=nullptr){
            temp=temp->next;
        }
         delete temp->next;
         temp->next=nullptr;
         return head;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Memory Address: ";
    for (int i = 0; i < n; i++) {
        Node* y = new Node(arr[i], nullptr);  // create a dynamic variable to print memory address
        cout << y << " ";
    }
    cout << endl;
    
    //Full Linked List
    cout<<"Linked List:";
    Node* head = arr2LL(arr);
    printLL(head);
    
    //Head of Linked List
    cout << "Head Node:" << head->data << endl;

    Node*tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    //Tail of Linked List
    cout<<"Tail Node:"<<tail->data<<endl;
    
    //Length of the linked list
    cout<<"Length of Liked List:"<<lengthLL(head)<<endl;

    //Finding the value present in the linked list
    int value;
    cout<<"Enter the value to be searched in the linked list:";
    cin>>value;
    if(findthevalue(head,value)){
        cout<<"Value found in the linked list."<<endl;
    }

    //DELETING HEAD NODE OF LINKED LIST
    cout<<"Linked List After Deleting Head Node:";
    head=delete_head(head);
    printLL(head);

    //DELETING TAIL NODE OF LINKED LIST
    cout<<"Linked List After Deleting Tail Node:";
    head=delete_tail(head);
    printLL(head);

    return 0;
}
