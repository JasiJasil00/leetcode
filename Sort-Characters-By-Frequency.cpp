1class Solution {
2public:
3    string frequencySort(string s) {
4        string result;
5        map <char,int> hash;
6        priority_queue<pair<int,char>> pq;
7        for (char c : s) {
8            hash[c]++;
9        }
10        for (auto p : hash) {
11            pq.push({p.second, p.first});
12        }
13        while (!pq.empty()) {
14            auto top = pq.top(); pq.pop();
15            result.append(top.first, top.second);
16        }
17        return result;
18    }
19};