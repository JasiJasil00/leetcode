class Solution {
public:
    int helper(string s, int index, int size ,long long num,int sign){
        if(index>=size || !isdigit(s[index]))
            return int (sign*num);

        num = (num*10+(s[index]-'0'));
        if( sign*num < INT_MIN)return INT_MIN;
        if(sign*num > INT_MAX)return INT_MAX;
        return helper(s,index+1,size,num,sign);
    }
    int myAtoi(string s) {
      int i=0;
      int n = s.size();
      while(i<n && s[i]==' ')i++;
        int sign=1;
    if (i < n && (s[i]=='-' || s[i]=='+')){
        sign = (s[i]=='-') ? -1 : 1;
        i++;
    }


    return helper(s,i,n,0,sign) ;
    }
};