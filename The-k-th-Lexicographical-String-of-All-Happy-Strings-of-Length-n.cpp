1class Solution {
2public:
3    string happy(char a,int n,int k, int& i){
4        if(n==0){
5            i++;
6            return "";
7        }
8        string r="";
9        if(a=='a'){
10            r= 'b' + happy('b',n-1,k,i);
11            if(i==k)return r;
12            r= 'c' + happy('c',n-1,k,i);
13            if(i==k)return r;
14        }else if(a=='b'){
15             r= 'a' + happy('a',n-1,k,i);
16            if(i==k)return r;
17            r= 'c' + happy('c',n-1,k,i);
18            if(i==k)return r;
19        }else if(a=='c'){
20             r= 'a' + happy('a',n-1,k,i);
21            if(i==k)return r;
22            r= 'b' + happy('b',n-1,k,i);
23            if(i==k)return r;
24        }else{
25            r= 'a' + happy('a',n-1,k,i);
26            if(i==k)return r;
27             r= 'b' + happy('b',n-1,k,i);
28            if(i==k)return r;
29            r= 'c' + happy('c',n-1,k,i);
30            if(i==k)return r;
31        }
32        return "";
33    }
34    string getHappyString(int n, int k) {
35        int pos = 0;
36       return happy('*',n,k,pos);
37    }
38};