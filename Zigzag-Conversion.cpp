1class Solution {
2public:
3    string convert(string s, int numRows) {
4       string result="";
5       int n = s.size();
6       int k =0;
7       while(k<numRows){
8       int i = k;
9       string inter="";
10       while(i < n){
11              if(i<n){
12                  inter+=s[i];
13                  i+=numRows;
14              }else break;
15              
16              if(k>=1&&k<numRows-1){
17                    int index = i-k+numRows-2-k;
18                  if(index<n)inter+=s[index];
19              } 
20              if(numRows>=2)i+=(numRows-2);    
21       }
22       result+=inter;
23       k++;
24       }
25       return result;
26    }
27};