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
13    ListNode* oddEvenList(ListNode* head) {
14        if(head == NULL || head->next==NULL)return head;
15        ListNode * even = head->next;
16        ListNode * start = even;
17        ListNode * odd = head;
18        ListNode * temp = head->next->next;
19        int flag =0;
20        while(temp!=NULL){
21            if(flag==0){
22                odd->next=temp;
23                odd=odd->next;
24            }else{
25                even->next=temp;
26                even=even->next;
27            }
28            flag^=1;
29            temp=temp->next;
30        }
31        even->next=NULL;
32        odd->next=start;
33        return head;
34    }
35};