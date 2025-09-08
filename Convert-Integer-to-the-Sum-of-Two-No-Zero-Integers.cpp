class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1 ; i <= n/2 ; i++){
            int a = n-i;
            int num = a;
            int flag = 0;
            int j = i;
            while(j!=0){
                if(j%10==0){
                    flag=1;
                    break;
                }
                j=j/10;
            } 
            while(num!=0){
                if(num%10==0 || flag==1){
                    flag = 1;
                    break;
                }
                num=num/10;
            }
            if(flag==0){
                return{i,a};
            }
        }
        return {-1,-1};
    }
};