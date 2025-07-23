class Solution {
public:
    string convertDateToBinary(string date) {
       int sum = 0;
       std::string result;
       for(int i = 0; i < date.size() ; i++){
            if(date[i]!='-')sum=sum*10+(date[i]-'0');
            string inter;
            while(date[i]=='-' && sum!=0){
                if(sum%2==1)inter+='1';
                else inter+='0';
                sum/=2;
            }
            if(date[i]=='-'){
                reverse(inter.begin(),inter.end());
            result.insert(result.end(),inter.begin(),inter.end());
            result.push_back('-');
            }
       }
        string inter;
        while(sum!=0){
                if(sum%2==1)inter+='1';
                else inter+='0';
                sum/=2;
        }
          reverse(inter.begin(),inter.end());
            result.insert(result.end(),inter.begin(),inter.end());
            
       return result;
    }
};