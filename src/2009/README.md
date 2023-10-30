# 2009

## 思路

采用快慢双指针，先让快指针走`k`步，再让快慢指针同步往后走。

当快指针走到`NULL`时，慢指针也走到了倒数第k个位置。

## 题源

- [力扣 19. 删除链表的倒数第N个结点](https://leetcode.cn/problems/remove-nth-node-from-end-of-list/)
