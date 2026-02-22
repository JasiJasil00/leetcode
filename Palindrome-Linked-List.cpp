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
13    bool isPalindrome(ListNode* head) {
14        vector <int> pq;
15        ListNode * temp = head;
16        while(temp!=NULL){
17            pq.push_back(temp->val);
18            temp = temp->next;
19        }
20        for(int i = 0 ; i < pq.size()/2 ; i++){
21            if(pq[i]!=pq[pq.size()-1-i])return false;
22        }
23        return true;
24    }
25};