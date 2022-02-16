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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = head->next;
        while (curr && next) {
            if (prev == nullptr) {
                curr->next = next->next;
                next->next = curr;
                head = next;
            } else {
                prev->next = next;
                curr->next = next->next;
                next->next = curr;
            }
            prev = curr;
            curr = curr->next;
            if(curr) {
                next = curr->next;
            }
        }
        return head;
    }
};
