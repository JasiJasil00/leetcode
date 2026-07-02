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
13    ListNode* reverseList(ListNode* head) {
14        ListNode * prev = NULL;
15        ListNode * curr = head;
16        while(curr!=NULL){
17            ListNode * next = curr->next;
18            curr->next = prev;
19            prev = curr;
20            curr = next;
21        }
22        return prev;
23    }
24    bool isPalindrome(ListNode* head) {
25        if(head==NULL || head->next==NULL){
26            return true;
27        }
28        
29        ListNode * slow = head;
30        ListNode * fast = head;
31        while(fast!=NULL && fast->next!=NULL){
32            slow = slow->next;
33            fast = fast->next->next;
34        }
35        if(fast!=NULL)slow=slow->next;
36        ListNode * newhead = reverseList(slow);
37        slow = head;
38        while(slow!=NULL && newhead!=NULL){
39            if(newhead->val!=slow->val)return false;
40            newhead=newhead->next;
41            slow=slow->next;
42        }
43        return true;
44    }
45};