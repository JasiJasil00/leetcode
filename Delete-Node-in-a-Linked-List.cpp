1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    void deleteNode(ListNode* node) {
12        ListNode  dummy(0); 
13        dummy.next=node;
14        ListNode * temp = &dummy;
15        while(temp->next->next!=NULL){
16            temp->next->val = temp->next->next->val;
17            temp=temp->next;
18        }
19        temp->next=NULL;
20    }
21};