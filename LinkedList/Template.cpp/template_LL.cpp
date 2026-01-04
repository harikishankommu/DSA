#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    // Constructor to initialize node
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

//printing linked list
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

    // print linked list
    printList(head);

    return 0;
}

