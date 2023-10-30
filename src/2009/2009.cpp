#include <iostream>
#include "./include/linklist.h"

int GetBackKNode(ListNode* head, int k) {
    ListNode* p = head;
    ListNode* q = p;
    while (k--) {
        if (!p)
            return 0;
        p = p->next;
    }
    while (p != nullptr) {
        p = p->next;
        q = q->next;
    }
    return q->val;
}

int main() {
    // [] -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> NULL
    //  ^
    // head
    ListNode* head = NewLinkList({ 1, 2, 3, 4, 5, 6 });
    std::cout << "查找成功的情况：" << GetBackKNode(head, 5) << '\n';
    std::cout << "查找失败的情况：" << GetBackKNode(head, 10) << '\n';
    return 0;
}

