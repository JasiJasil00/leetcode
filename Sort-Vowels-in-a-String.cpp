class Solution {
public:
    string sortVowels(string s) {
        vector<int>vow;
        for(char loop : s){
            char m = tolower(loop);
            if(m== 'a' || m=='e' || m=='i' || m=='o' || m=='u'){
                vow.push_back(loop);
            }
        }
        sort(vow.begin(),vow.end());
        int k = 0;
        for(char &loop : s){
            char m = tolower(loop);
            if(m== 'a' || m=='e' || m=='i' || m=='o' || m=='u'){
                loop = vow[k++];
            }
        }
        return s;
    }
};