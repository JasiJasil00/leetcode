/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapNodes(struct ListNode* head, int k) {
    int data1;
    int data2;
    struct ListNode * temp = head;
    int count = 0 ;
    while( temp != NULL ){
        count++;
        if(count==k)data1=temp->val;
        temp=temp->next;
    }
    int y = count - k;
    temp = head;
    count=0;
    while(temp != NULL){
        count++;
        if(count == y+1){
            data2=temp->val;
            temp->val=data1;
        }
        temp=temp->next;
    }
    temp = head;
    count =0;
    while(temp != NULL){
        count++;
        if(count==k)temp->val=data2;
        temp=temp->next;
    }
    return head;
}
