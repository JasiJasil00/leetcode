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
13    ListNode* sortList(ListNode* head) {
14        vector<int> array;
15        ListNode * temp = head;
16        while(temp!=NULL){
17            array.push_back(temp->val);
18            temp = temp->next;
19        }
20        sort(array.begin(),array.end());
21        temp = head;
22        int i =0;
23        while(temp!=NULL){
24            temp->val=array[i++];
25            temp = temp->next;
26        }
27        return head;
28    }
29};