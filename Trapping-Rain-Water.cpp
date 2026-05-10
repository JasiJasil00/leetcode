1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int n = height.size();
5        int left = 0;
6        int right = n-1;
7        int maxleft = -1;
8        int maxright= -1;
9        int sum = 0;
10        while(left<=right){
11            if(height[left]<height[right]){
12               if(height[left] >= maxleft){
13                    maxleft = height[left];
14                }else{
15                    sum += maxleft - height[left];
16                }
17
18                left++;
19            }else{
20                 if(height[right] >= maxright){
21                    maxright = height[right];
22                }else{
23                    sum += maxright - height[right];
24                }
25
26                right--;
27            }
28        }
29        return sum;      
30    }
31};