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
13    ListNode* removeElements(ListNode* head, int val) {
14        if(head==NULL)return NULL;
15        ListNode * prev = NULL;
16        ListNode * temp = head;
17        while(temp!=NULL){
18            if(temp->val==val){
19                ListNode * d = temp;
20                if(prev==NULL){
21                    head=temp->next;
22                }else{
23                    prev->next=temp->next;
24                }
25                temp= temp->next;
26                delete d;
27            }else{
28                prev = temp;
29                temp= temp->next;
30            }
31        }
32        return head;
33    }
34};