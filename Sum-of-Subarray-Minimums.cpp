1//frequency counting concept
2class Solution {
3public:
4    int sumSubarrayMins(vector<int>& arr) {
5        long long sum = 0;
6        int n = arr.size();
7        const int MOD = 1e9 + 7;
8        vector<int> left(n),right(n);
9        stack<int>s;
10        //end
11        for(int i = 0 ; i < n ; i++){
12            while(!s.empty() && arr[s.top()] > arr[i]){
13                s.pop();
14            }
15            if(s.empty()){
16                left[i]=i+1;
17            }else{
18                left[i]=i-s.top();
19            }
20            s.push(i);
21        }
22
23        while(!s.empty())s.pop();
24        //start
25        for(int i = n-1 ; i >=0 ; i--){
26             while(!s.empty() && arr[s.top()] >= arr[i]){
27                s.pop();
28            }
29            if(s.empty()){
30                right[i]=n-i;
31            }else{
32                right[i]=s.top()-i;
33            }
34            s.push(i);
35        }
36
37        for(int i = 0 ; i < n ; i++){
38            long long contribution =
39                (1LL * arr[i] * left[i] * right[i]) % MOD;
40
41        sum = (sum + contribution) % MOD;
42        }
43        return sum;
44    }
45};