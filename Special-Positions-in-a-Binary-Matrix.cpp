1class Solution {
2public:
3    int numSpecial(vector<vector<int>>& mat) {
4        vector<int>row(mat.size(),-1);
5        vector<int>col(mat[0].size(),-1);
6        for(int i = 0 ; i < mat.size()  ; i++){
7            for(int j = 0 ; j < mat[i].size() ; j++){
8                if(mat[i][j]==1){
9                    if(row[i]==-1)row[i]=j;
10                    else row[i]=-2;
11                    if(col[j]==-1)col[j]=i;
12                    else col[j]=-2;
13                }
14            }
15        }
16        int j = 0;
17        int count = 0;
18        while(j!=mat[0].size()){
19            if(col[j]>=0){
20                int i =0;
21                while(i!=mat.size()){
22                    if(row[i]==j){
23                        count++;
24                        break;
25                    }
26                    i++;
27                }
28            }
29            j++;
30        }
31        return count;
32    }
33};