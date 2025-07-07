class Solution {
public:
    bool isAnagram(string s, string t) {
        map<int,int> hash,hash2;
        if(s.size()!=t.size())return false;
        int n = s.size();
        for(int i = 0; i < n ; i ++){
            hash[s[i]]++;
            hash2[t[i]]++;
        }
        for(int i = 0; i < n ; i ++){
           if(hash[s[i]]!=hash2[s[i]])return false;
        }
        return true;
    }
};