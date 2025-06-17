class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        std::unordered_set<int> hash(nums.begin(), nums.end());
        ListNode dummy(0);
        dummy.next = head;
        ListNode* temp = &dummy;
        int n = nums.size() - 1;

        while (temp->next != nullptr) {
            bool found = false;
            
                if (hash.count(temp->next->val)) {
                    temp->next = temp->next->next;
                    continue;
                }
           
            if (!found) temp = temp->next;
        } 

        return dummy.next;
    }
};
