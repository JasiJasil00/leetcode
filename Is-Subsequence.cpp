class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while(s[i]!='\0' && t[j]!='\0')
        {   
            if(s[i]=='\0')return true;
            if(t[j]==s[i])i++;
            j++;
        }
        if(s[i]=='\0')return true;
        return false;
    }
};