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
14       if(head == NULL || head->next == NULL) 
15    return head;
16        ListNode * even = NULL;
17        ListNode * odd = NULL;
18        ListNode * temp = head;
19        odd = temp;
20        even = temp->next;
21        ListNode * start = even;
22        if(temp->next)temp = temp->next->next;
23        while(temp!=NULL){
24            odd->next = temp;
25            odd=odd->next;
26            if(temp->next){
27                even->next = temp->next;
28                even=even->next;
29            }
30            temp = (temp->next) ? temp->next->next : NULL;
31           
32        }
33        odd->next = start;
34        if(even)even->next=NULL;
35        return head;;
36    }
37};