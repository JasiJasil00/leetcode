/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(head == NULL)return head;
    struct ListNode * temp = head;
    while(temp != NULL){
        struct ListNode * temp1 = temp;
        while(temp1->next != NULL && temp->val == temp1->next->val ){
            temp1->next = temp1->next->next;
        }
        temp = temp->next;
    }
    return head;
}