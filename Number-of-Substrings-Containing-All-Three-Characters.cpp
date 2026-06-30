1class Solution {
2public:
3    int numberOfSubstrings(string s) {
4        int n = s.size();
5        int count = 0;
6        int low = 0;
7        vector<int>a(3,0);
8        for (int i = 0; i < n; i++) {
9            a[s[i]-'a']++;
10            while(a[0]&& a[1]&& a[2] && low < n){
11                count+=n-i;
12                a[s[low]-'a']--;
13                low++;
14            }
15        }
16        if(a[0]&&a[1]&&a[2])count++;
17        return count;
18    }
19};