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
    ListNode* merge(ListNode* head1, ListNode* head2) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (head1 && head2) {
            if (head1->val <= head2->val) {
                tail->next = head1;
                head1 = head1->next;
            } else {
                tail->next = head2;
                head2 = head2->next;
            }
            tail = tail->next;
        }

        if (head1)
            tail->next = head1;
        else
            tail->next = head2;

        return dummy.next;
    }
    void mergesort(ListNode*& head) {
        if (head == NULL || head->next == NULL)
            return;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;
        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        mergesort(head);
        mergesort(slow);
        head = merge(head, slow);
    }
    ListNode* sortList(ListNode* head) {
        mergesort(head);
        return head;
    }
};