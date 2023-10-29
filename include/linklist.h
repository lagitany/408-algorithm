#ifndef LINK_LIST_H
#define LINK_LIST_H

#include <initializer_list>

struct ListNode {
    int val;
    ListNode* next;

    ListNode() {}

    ListNode(int value) {
        val = value;
    }
};

ListNode* NewLinkList(std::initializer_list<int> arr) {
    ListNode* head = new ListNode();
    ListNode* p = head;
    for (auto x : arr) {
        p->next = new ListNode(x);
        p = p->next;
    }
    p->next = nullptr;
    return head;
}

#endif
