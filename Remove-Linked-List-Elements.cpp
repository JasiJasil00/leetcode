class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);         // Dummy node with any value
        dummy.next = head;         // Point to the real head
        ListNode* current = &dummy;

        while (current->next != nullptr) {
            if (current->next->val == val) {
                current->next = current->next->next; // Skip the node
            } else {
                current = current->next;
            }
        }

        return dummy.next; // New head (in case old head was deleted)
    }
};
