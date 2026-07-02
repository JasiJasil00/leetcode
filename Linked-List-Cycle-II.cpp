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
11    ListNode *detectCycle(ListNode *head) {
12        ListNode * slow = head;
13        ListNode * fast = head;
14        while(fast!=NULL && fast->next!=NULL){
15            
16            slow=slow->next;
17            fast=fast->next->next;
18            if(fast==slow){
19                slow = head;
20
21                // Move both one step at a time to find starting point
22                while (slow != fast) {
23                    slow = slow->next;
24                    fast = fast->next;
25                }
26
27                // Return the start node of the loop
28                return slow;
29            }
30        }
31        return NULL;
32    }
33};