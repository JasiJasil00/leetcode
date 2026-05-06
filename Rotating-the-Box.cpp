1class Solution {
2public:
3    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
4        int cols = boxGrid.size();
5        int rows = boxGrid[0].size();
6        vector<vector<char>> result(rows,vector<char>(cols, '.'));
7        for(int i = 0 ; i < cols ; i ++){
8            vector<int>block;
9            int count = 0;
10            vector<int>thing;
11            for(int j = rows-1 ; j >= 0 ; j--){
12                if(boxGrid[i][j]=='#')count++;
13                if(boxGrid[i][j]=='*'){
14                    thing.push_back(count);
15                    count = 0;
16                    block.push_back(j);
17                }
18            }
19            thing.push_back(count);
20            int j = rows-1;
21            while(block.size()!=0){
22                while(thing[0]!=0){
23                    result[j][cols - 1 - i]='#';
24                    thing[0]--;
25                    j--;
26                }
27                result[block[0]][cols - 1 - i]='*';
28                j=block[0]-1;
29                block.erase(block.begin()+0);
30                thing.erase(thing.begin()+0);
31            }
32            while(thing.size()!=0&&thing[0]!=0){
33                result[j][cols - 1 - i]='#';
34                    thing[0]--;
35                    j--;
36            }
37            thing.erase(thing.begin()+0);
38        }
39        return result;
40    }
41};