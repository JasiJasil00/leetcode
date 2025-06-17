/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode  dummy(0); 
        dummy.next=node;
        ListNode * temp = &dummy;
        while(temp->next->next!=NULL){
            temp->next->val = temp->next->next->val;
            temp=temp->next;
        }
        temp->next=NULL;
    }
};