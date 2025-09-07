class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int slow = a[0];
        int fast = a[0];

        // Step 1: Detect cycle
        do {
            slow = a[slow];          // Move 1 step
            fast = a[a[fast]];    // Move 2 steps
        } while (slow != fast);

        // Step 2: Find entry point of cycle (duplicate)
        slow = a[0];
        while (slow != fast) {
            slow = a[slow];
            fast = a[fast];
        }
        return slow; 
    }
};