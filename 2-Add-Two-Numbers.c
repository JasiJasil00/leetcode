/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode * createnode(int val) {
    struct ListNode *newnode = (struct ListNode *)malloc(sizeof(struct ListNode));
    newnode->val = val;
    newnode->next = NULL;
    return newnode;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* dummy = createnode(0); // Dummy node to simplify result list handling
    struct ListNode* current = dummy;
    int carry = 0;

    // Traverse both lists until both are NULL and no carry remains
    while (l1 != NULL || l2 != NULL || carry > 0) {
        int sum = carry;
        
        if (l1 != NULL) {
            sum += l1->val;
            l1 = l1->next;
        }
        
        if (l2 != NULL) {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10; // Compute carry
        current->next = createnode(sum % 10); // Add digit to the result list
        current = current->next;
    }

    return dummy->next; // Return the result list, skipping the dummy node
}
