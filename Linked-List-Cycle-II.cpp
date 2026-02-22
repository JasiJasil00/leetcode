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
12        map <ListNode*,ListNode *> hash;
13        ListNode * temp = head;
14        while(temp!=NULL){
15            if(hash[temp]==0)hash[temp]=temp;
16            else return hash[temp];
17            temp=temp->next;
18            
19        }
20        return NULL;
21    }
22};