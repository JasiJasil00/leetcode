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
13    ListNode* reverseList(ListNode* head) {
14        if(head==nullptr)return NULL;
15        stack<ListNode*>s;
16        ListNode * temp = head;
17        while(temp->next!=NULL){
18            s.push(temp);
19            temp=temp->next;
20        }
21        head = temp;
22        while(!s.empty()){
23            temp->next=s.top();
24            s.pop();
25            temp=temp->next;
26        }
27        temp->next=NULL;
28        return head;
29    }
30};