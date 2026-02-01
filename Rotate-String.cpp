1
2class Solution {
3public:
4    bool rotateString(string s, string goal) {
5        if(s.size()!=goal.size())return false;
6         if (s.size() <= 1) return s == goal;
7
8        int n = s.size();
9        for(int i =0 ; i < n ;  i ++){
10        char temp = s[n-1];
11        s[n-1]=s[0];
12        for(int j = 0 ; j < n-2 ; j ++){
13            s[j]=s[j+1];
14        }
15        s[n-2]=temp;
16      if (s == goal) return true;
17
18    }
19    return false;
20    }
21};