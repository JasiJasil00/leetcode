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
13    ListNode* removeNthFromEnd(ListNode* head, int n) {
14        if(head==NULL )return NULL;
15        ListNode *slow = head;
16        ListNode * fast = head;
17        for(int i = 0; i < n ; i++){
18            fast = fast->next;
19        }
20        ListNode * prev = NULL;
21        while(fast!=NULL){
22            prev = slow;
23            slow=slow->next;
24            fast=fast->next;
25        }
26        ListNode * temp = slow;
27        if(prev!=NULL)prev->next=slow->next;
28        else head=head->next;
29        delete temp;
30        return head;
31
32    }
33};