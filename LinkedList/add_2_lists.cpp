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

    ListNode* head=new ListNode(x);
    ListNode* temp=head;

    for(int i=1;i<n;i++){
        cin>>x;
        temp->next=new ListNode(x);
        temp=temp->next;
    }
    return head;
}

void printList(ListNode* head){
    ListNode* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

ListNode* add2Lists(ListNode* l1,ListNode* l2){
    ListNode dummy(0);
    ListNode* curr=&dummy;
    int carry=0;

    while(l1!=NULL || l2!=NULL || carry){
        int sum=carry;

        if(l1){
            sum+=l1->val;
            l1=l1->next;
        }
        if(l2){
            sum+=l2->val;
            l2=l2->next;
        }
        carry=sum/10;
        curr->next=new ListNode(sum%10);
        curr=curr->next;
    }
    return dummy.next;
}
int main(){
    int n1;
    cin>>n1;
    ListNode* l1=BuildList(n1);
    int n2;
    cin>>n2;
    ListNode* l2= BuildList(n2);

    ListNode* head=add2Lists(l1,l2);
    printList(head);
    return 0;
    
}


// Time Complexity: O(max(n, m))
// Space Complexity: O(max(n, m)) (due to output list), O(1) auxiliary space