1class Solution {
2public:
3    struct cmp {
4    bool operator()(const pair<char,int>& a,
5                    const pair<char,int>& b) const {
6        // sort by frequency descending
7        if (a.second != b.second)
8            return a.second > b.second;
9
10        // if frequency same, sort by character
11        return a.first < b.first;
12    }
13    };
14    string frequencySort(string s) {
15        string result;
16        map <char,int> hash;
17        set<pair<char,int>,cmp> freq;
18        for (char c : s) {
19            // if character already exists
20            if (hash.find(c) != hash.end()) {
21                // erase old frequency pair
22                freq.erase({c, hash[c]});
23            }
24
25            // update frequency
26            hash[c]++;
27
28            // insert updated frequency
29            freq.insert({c, hash[c]});
30        }
31        for (auto p : freq) {
32            result.append(p.second, p.first);
33        }
34        return result;
35    }
36};