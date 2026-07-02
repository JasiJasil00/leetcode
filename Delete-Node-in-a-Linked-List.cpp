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
12        if(node == NULL)return;
13        ListNode * prev = NULL;
14        ListNode * temp = node;
15        while(temp->next!=NULL){
16            temp->val = temp->next->val;
17            prev = temp;
18            temp = temp->next;
19        }
20        prev->next = NULL;
21    }
22};