1class Solution {
2public:
3    void rotate(vector<vector<int>>& matrix) {
4        int n = matrix.size();
5        vector<int> a(4,-1);
6        vector<int> b(4,-1);
7        a[0]=0;
8        b[0]=0;
9        a[1]=0;
10        b[1]=n-1;
11        a[2]=n-1;
12        b[2]=n-1;
13        a[3]=n-1;
14        b[3]=0;
15        for(int i = 0; i < n/2 ; i++){
16           while(b[0]<n-i-1){
17                 int temp = matrix[a[0]][b[0]];
18                matrix[a[0]][b[0]]= matrix[a[3]][b[3]];
19                matrix[a[3]][b[3]]=matrix[a[2]][b[2]];
20                matrix[a[2]][b[2]]=matrix[a[1]][b[1]];
21                matrix[a[1]][b[1]]=temp;
22                b[0]++;
23                a[1]++;
24                b[2]--;
25                a[3]--;
26            }
27            int x = b[0];
28            b[0]=b[2];
29            b[2]=x;
30            x=a[1];
31            a[1]=a[3];
32            a[3]=x;
33            a[0]++;b[0]++;
34            a[1]++;b[1]--;
35            a[2]--;b[2]--;
36            a[3]--;b[3]++;
37        }
38        
39    }
40};