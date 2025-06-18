/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr)return nullptr;
        ListNode dummy(0);
        dummy.next=head;
        ListNode* temp = &dummy;
        ListNode* p = nullptr;
        for(int i = 1; i < left ; i++){
            temp=temp->next;
        }
        p=temp;
        if(temp->next==nullptr)return head;
        ListNode * current = temp->next;
        ListNode * prev = NULL;
        ListNode * nextnode = NULL;
        for(int i = 0 ; i <= right - left ; i++){
            nextnode = current->next;
            current->next=prev;
            prev=current;
            current=nextnode;
        }
        temp->next->next=current;
        temp->next=prev;
        return dummy.next;
    }
};