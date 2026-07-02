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
14        ListNode * prev = NULL;
15        ListNode * curr = head;
16        while(curr!=NULL){
17            ListNode* next = curr->next;
18            curr->next = prev;
19            prev = curr;
20            curr = next;
21        }
22        head = prev;
23    }
24    ListNode* removeNthFromEnd(ListNode* head, int n) {
25        reverse(head);
26        if(head==NULL)return NULL;
27        ListNode * prev=NULL;
28        ListNode* temp = head;
29        int i =1;
30        while(temp!=NULL && i<n){
31            prev=temp;
32            temp=temp->next;
33            i++;
34        }
35        if(prev!=NULL){
36            if(temp!=NULL)prev->next=temp->next;
37        }else{
38            head=head->next;
39        }
40        reverse(head);
41        return head;
42    }
43};