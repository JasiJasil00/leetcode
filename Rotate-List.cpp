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
14        if(head == NULL || head->next == NULL || k == 0)
15    return head;
16        int length=0;
17        ListNode* temp = head;
18        while(temp!=NULL){
19            length++;
20            temp=temp->next;
21        }
22        k = k % length;
23        temp = head;
24        for(int i = 0; i < length-k-1 ; i++){
25            temp = temp->next;
26        }
27        ListNode * start = temp->next;
28        temp->next = NULL;
29        temp = start;
30            if(temp==NULL)return head;
31        while(temp->next!=NULL){
32            temp=temp->next;
33        }
34        temp->next=head;
35        return start;
36    }
37};