class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = magazine.size();
        int m = ransomNote.size();
        map <char,int> hash;
        for(int i = 0 ; i < n ; i ++){
            hash[magazine[i]]++;
        }
        for(int i = 0 ; i < m ; i ++){
            if(hash[ransomNote[i]]<=0)return false;
            hash[ransomNote[i]]--;
        }
        return true;
    }
};