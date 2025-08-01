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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr)return NULL;
        stack<ListNode*>s;
        ListNode * temp = head;
        while(temp->next!=NULL){
            s.push(temp);
            temp=temp->next;
        }
        head = temp;
        while(!s.empty()){
            temp->next=s.top();
            s.pop();
            temp=temp->next;
        }
        temp->next=NULL;
        return head;
    }
};