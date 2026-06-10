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
11            int index = i-k+numRows+numRows-2-k; 
12              if(i<n){
13                  inter+=s[i];
14                  i+=numRows;
15              }else break;
16              
17              if(k>=1&&k<numRows-1){
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