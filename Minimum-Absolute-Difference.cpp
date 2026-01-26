1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
4       sort(arr.begin(), arr.end());
5
6        int mn = INT_MAX;
7
8        // Find minimum difference
9        for (int i = 0; i < arr.size() - 1; i++) {
10            mn = min(mn, arr[i + 1] - arr[i]);
11        }
12
13        vector<vector<int>> result;
14
15        // Collect pairs with minimum difference
16        for (int i = 0; i < arr.size() - 1; i++) {
17            if (arr[i + 1] - arr[i] == mn) {
18                result.push_back({arr[i], arr[i + 1]});
19            }
20        }
21
22        return result;
23    }
24};