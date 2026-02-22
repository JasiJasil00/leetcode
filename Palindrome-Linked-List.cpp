1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    bool isPalindrome(ListNode* head) {
14        if(head==NULL && head->next==nullptr)return true;
15        ListNode * temp = head;
16        ListNode * slow = head;
17        stack<ListNode*>s;
18        while(temp!=NULL && temp->next!=NULL){
19            s.push(slow);
20            slow=slow->next;
21            temp=temp->next->next;
22        }
23        if (temp != NULL) {
24            slow = slow->next;
25        }
26        while(!s.empty()&&slow!=NULL){
27            if(slow->val!=s.top()->val){
28                return false;
29            }s.pop();
30                slow=slow->next;
31        }
32        return true;
33    }
34};