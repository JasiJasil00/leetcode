class Solution {
public:
    string reverseWords(string s) {
       while (!s.empty() && s.front() == ' ') s.erase(s.begin());
while (!s.empty() && s.back() == ' ') s.pop_back();
        int i=0;
        while(i<s.size()-1){
            while(s[i]==' ' && s[i+1]==' '){
                s.erase(s.begin()+i);
            }
            i++;
        }
        reverse(s.begin(),s.end());
        i = 0;
        while(i<s.size()){
            int j = i;
            while(i < s.size() && s[i] != ' '){
                i++;
            }
            reverse(s.begin()+j,s.begin()+i);
            i++;
        }
        return s;
    }
};