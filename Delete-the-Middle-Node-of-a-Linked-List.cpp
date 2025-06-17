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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * temp = head;
        if(head->next==NULL)return NULL;
        int a =0;
        while(temp!=NULL){
            temp=temp->next;
            a++;
        }
        int y = a/2;
        a=0;
        temp = head;
        while(a!=(y-1) && temp!=NULL){
            temp =temp->next;
            a++;
        }
        if(temp->next!=NULL && temp!=NULL)temp->next = temp->next->next;
        return head;
    }
};