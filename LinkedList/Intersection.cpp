#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

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

ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
    if (!headA || !headB) return NULL;

    ListNode* pA = headA;
    ListNode* pB = headB;

    while (pA != pB) {
        if (pA == NULL) pA = headB;
        else pA = pA->next;

        if (pB == NULL) pB = headA;
        else pB = pB->next;
    }
    return pA;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    ListNode* l1 = buildList(n1);
    ListNode* l2 = buildList(n2);

    int skipA, skipB;
    cin >> skipA >> skipB;

    // Find intersection point in list A
    ListNode* inter = l1;
    for (int i = 0; i < skipA && inter; i++)
        inter = inter->next;

    // Connect list B at skipB
    ListNode* temp = l2;
    for (int i = 0; i < skipB - 1 && temp; i++)
        temp = temp->next;

    if (temp)
        temp->next = inter;

    ListNode* ans = getIntersectionNode(l1, l2);

    if (ans)
        cout << "Intersected at: " << ans->val << endl;
    else
        cout << "No intersection" << endl;

    return 0;
}
