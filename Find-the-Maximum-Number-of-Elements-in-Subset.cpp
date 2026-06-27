1class Solution {
2public:
3    int maximumLength(vector<int>& nums) {
4        map<long long,int> cnt;
5
6        for (int x : nums)
7            cnt[x]++;
8
9        int ans = 1;
10
11        // Special case for 1
12        if (cnt.count(1)) {
13            int c = cnt[1];
14            if (c % 2 == 0)
15                c--;
16            ans = max(ans, c);
17        }
18
19        for (auto &[x, f] : cnt) {
20            if (x == 1 || f < 2)
21                continue;
22
23            int len = 2;
24            long long cur = x * x;
25
26            while (cnt.count(cur)) {
27                if (cnt[cur] >= 2) {
28                    len += 2;
29                } else {
30                    len++;
31                     ans = max(ans, len);
32                    break;
33                }
34
35                if (cur > 1e9)
36                    break;
37
38                cur *= cur;
39            }
40
41            ans = max(ans, len - 1);
42        }
43
44        return ans;
45    }
46};