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
    bool isPalindrome(ListNode* head) {
        if(head==NULL && head->next==nullptr)return true;
        ListNode * temp = head;
        ListNode * slow = head;
        stack<ListNode*>s;
        while(temp!=NULL && temp->next!=NULL){
            s.push(slow);
            slow=slow->next;
            temp=temp->next->next;
        }
        if (temp != NULL) {
            slow = slow->next;
        }
        while(!s.empty()&&slow!=NULL){
            if(slow->val!=s.top()->val){
                return false;
            }s.pop();
                slow=slow->next;
        }
        return true;
    }
};