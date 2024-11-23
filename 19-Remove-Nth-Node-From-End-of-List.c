/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int count = 0 ;
    if( head != NULL && head->next == NULL && n == 1 ) head = NULL;

    struct ListNode * temp = head;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    temp = head;
    if(n==count)head=head->next;
    int y = count - n;
    count = 0;
    while(temp != NULL){
        count++;
        if(count == y)temp->next=temp->next->next;
        temp = temp->next;
    }
    return head;
}