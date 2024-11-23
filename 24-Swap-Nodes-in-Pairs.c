/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode * first = head;
    struct ListNode * second = head->next;
    struct ListNode * prev= NULL;
    while(second!=NULL && first != NULL){
        first->next=second->next;
        second->next=first;
        if(prev!=NULL)prev->next=second;
        if(prev==NULL)head=second;
        prev=first;
        first=first->next;
        if (first != NULL) {
            second = first->next;
        }
    }
    return head;
}