#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

//Input code to build linked list
ListNode* buildList(int n) {
    if (n == 0) return NULL;

    int x;
    cin >> x;

    ListNode* head = new ListNode(x);
    ListNode* temp = head;

    for (int i = 1; i < n; i++) {
        cin >> x;
        temp->next = new ListNode(x);
        temp = temp->next;
    }

    return head;
}

ListNode* reverseLL(ListNode* head){

    ListNode* prevNode=NULL;
    ListNode* currNode=head;
    ListNode* nextNode=NULL;
    
    while(currNode!=NULL){
        nextNode=currNode->next;   //store next node
        currNode->next=prevNode;  //reverse the link
        prevNode=currNode;       //move prevNode and currNode one step forward
        currNode=nextNode;       //move currNode one  step forward
    }
    return prevNode;
}

void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}


int main() {

    int n;
    cin >> n;
    ListNode* head = buildList(n);
    // reverse linked list
    ListNode* newHead = reverseLL(head);
    printList(newHead);

   

    return 0;
}
