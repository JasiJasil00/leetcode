1class Solution {
2public:
3    bool vowel(char c){
4        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
5    }
6    string trimTrailingVowels(string s) {
7        string result = "";
8        int i = s.size()-1;
9      
10            while(vowel(s[i])&&i!=0)i--;
11            
12        if(i==0 && vowel(s[i]))return "";
13        int j = 0;
14        while(j!=i+1){
15            result+=s[j];
16            j++;
17        }
18        return result;
19    }
20};