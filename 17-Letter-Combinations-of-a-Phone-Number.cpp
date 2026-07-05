class Solution {
public:
    string numbertoalphabet(char c){
        if(c=='2'){
            return "abc";
        }else if(c=='3'){
            return "def";
        }else if(c=='4'){
            return "ghi";
        }else if(c=='5'){
            return "jkl";
        }else if(c=='6'){
            return "mno";
        }else if(c=='7'){
            return "pqrs";
        }else if(c=='8'){
            return "tuv";
        }else if(c=='9'){
            return "wxyz";
        }
        return "";
    }
    void recursive(string d,int index,string curr,vector<string> & result){
        if(curr.size()==d.size()){
            result.push_back(curr);
            return;
        }
        if(index>=d.size())return;
        string k = numbertoalphabet(d[index]);
        for(int i = 0 ; i < k.size() ; i++){
            recursive(d,index+1,curr+k[i],result);
        }
    }
    vector<string> letterCombinations(string digits) {
        int count = 0;
        vector<string>result;
        recursive(digits,0,"",result);
        return result;
    }
};