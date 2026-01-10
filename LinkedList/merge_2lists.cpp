//Merging two sorted linked lists
#include<bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

    ListNode(int x){
        val=x;
        next=NULL;
    }
};

ListNode* BuildList(int n){
    if(n==0) return NULL;

    int x;
    cin>>x;
    ListNode* head= new ListNode(x);
    ListNode* temp=head;

    for(int i=1;i<n;i++){
        cin>>x;
        temp->next=new ListNode(x);
        temp=temp->next;
    }
    return head;
}

ListNode* merge2Lists(ListNode* l1, ListNode* l2){
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;

    //iterative approach
    ListNode* dummy=new ListNode(-1);
    ListNode* tail=dummy;

    while(l1!=NULL && l2!=NULL){
        if(l1->val<l2->val){
            tail->next=l1;
            l1=l1->next;
        }else{
            tail->next=l2;
            l2=l2->next;
        }
        tail=tail->next;
    }
    if(l1!=NULL) tail->next=l1;
    if(l2!=NULL) tail->next=l2;
    return dummy->next;
}
void printList(ListNode* head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    int n1,n2;
    cin>>n1>>n2;

    ListNode* l1=BuildList(n1);
    ListNode* l2=BuildList(n2);
    ListNode* head=merge2Lists(l1,l2);
    printList(head);
}

//Time: O(n + m)
//Space: O(1) extra (no new list nodes)