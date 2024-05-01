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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l = NULL;
        ListNode *head = NULL;
        ListNode **ptr = &head;
        unsigned short val = 0;
        unsigned short inc = 0;
        unsigned short digit = 0;
        while (l1 && l2) {
            val = l1->val + l2->val;
            digit = (val + inc) % 10;
            inc = ((!inc && val >= 10) || (inc && ((val + 1) >= 10))) ? 1 : 0;

            *ptr = new ListNode;
            (*ptr)->val = digit;
            ptr = &(*ptr)->next;

            l1 = l1->next;
            l2 = l2->next;
        }

        if (!l1 && !l2) {
            ;
        } else if (!l1) {
            l = l2;
        } else if (!l2) {
            l = l1;
        } else {
            ;
        }

        while (l) {
            val = l->val;
            digit = (val + inc) % 10;
            inc = ((!inc && val >= 10) || (inc && ((val + 1) >= 10))) ? 1 : 0;

            *ptr = new ListNode;
            (*ptr)->val = digit;
            ptr = &(*ptr)->next;

            l = l->next;
        }

        if (inc) {
            *ptr = new ListNode;
            (*ptr)->val = 1;
            ptr = &(*ptr)->next;
        }

        (*ptr) = nullptr;

        return head;
    }
};
