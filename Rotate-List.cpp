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
13    ListNode* rotateRight(ListNode* head, int k) {
14        if(head==NULL || head->next==NULL)return head;
15        int n = 0;
16        ListNode * temp = head;
17        ListNode * end=NULL;
18        while(temp!=NULL){
19            end=temp;
20            temp=temp->next;
21            n++;
22        }
23        if(n!=0)k=k%n;
24        int i = 0;
25        temp = head;
26        while(i < n-k-1){
27            temp=temp->next;
28            i++;
29        }
30        end->next=head;
31        head = temp->next;
32        temp->next=NULL;
33        return head;
34    }
35};