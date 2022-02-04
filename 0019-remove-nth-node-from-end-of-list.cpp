/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy = ListNode();
        dummy.next = head;

        ListNode* p = &dummy;
        ListNode* pa = &dummy;

        for (int i = 0; i <= n-1 ; i++) {
            pa = pa->next;
        }

        while (pa->next != nullptr) {
            p = p->next;
            pa = pa->next;
        }
        p->next = p->next->next;

        return dummy.next;
    }
};
