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
13    ListNode* reverseKGroup(ListNode* head, int k) {
14      if (!head || k == 1) return head;
15
16        ListNode *temp = head;
17        ListNode *prev = NULL;
18        ListNode *newHead = head;  
19        while (temp != NULL) {
20
21       
22            int count = 0;
23            ListNode *check = temp;
24            while (check != NULL && count < k) {
25                check = check->next;
26                count++;
27            }
28
29            if (count < k) break;  
30          
31            stack<ListNode*> s;
32            ListNode *curr = temp;
33            for (int i = 0; i < k; i++) {
34                s.push(curr);
35                curr = curr->next;
36            }
37
38            if (prev == NULL) {
39                newHead = s.top();  
40            } else {
41                prev->next = s.top();
42            }
43
44            ListNode *node = s.top();
45            s.pop();
46
47            while (!s.empty()) {
48                node->next = s.top();
49                s.pop();
50                node = node->next;
51            }
52
53            node->next = curr;
54
55            
56            prev = node;
57            temp = curr;
58        }
59
60        return newHead;
61    }
62};