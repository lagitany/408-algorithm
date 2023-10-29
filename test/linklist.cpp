#include "./include/linklist.h"

#include <iostream>

int main() {
    ListNode* head = NewLinkList({ 1, 2, 3 });
    ListNode* p = head->next;
    while (p != nullptr) {
        std::cout << p->val << ", ";
        p = p->next;
    }
    std::cout << "\n";
    return 0;
}