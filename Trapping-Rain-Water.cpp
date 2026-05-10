1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int n = height.size();
5        stack<int>s;
6        int sum = 0;
7        for(int i = 0 ; i < n ; i++){
8            while(!s.empty() && height[i] > height[s.top()]){
9                int bottom = s.top();
10                s.pop();
11                if(s.empty())break;
12                int left = s.top();
13                int width = i - left-1;
14                  int boundedHeight =
15                    min(height[left], height[i]) - height[bottom];
16
17                sum += width * boundedHeight;
18            }
19            s.push(i);
20        }
21        return sum;
22          
23    }
24};