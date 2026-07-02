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
13    void reverse(ListNode * &head){
14        if(head==NULL)return;
15        ListNode * prev = NULL;
16        ListNode * curr = head;
17        while(curr!=NULL){
18            ListNode * next = curr->next;
19            curr->next=prev;
20            prev = curr;
21            curr = next;
22        }
23        head = prev;
24    }
25    ListNode* removeNodes(ListNode* head) {
26        int max = INT_MIN;
27        reverse(head);
28        ListNode * prev = NULL;
29        ListNode* temp = head;
30        while(temp!=NULL){
31            if(temp->val<max){
32                ListNode * d = temp;
33                if(prev==NULL){
34                    head=head->next;
35                }else{
36                    prev->next=temp->next;
37                }
38                temp = temp->next;
39               
40            }else{
41                max=temp->val;
42                prev=temp;
43                temp=temp->next;
44            }
45        }
46        reverse(head);
47        return head;
48    }
49};