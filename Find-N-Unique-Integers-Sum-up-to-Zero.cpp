class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> a;
        if(n%2==1){a.push_back(0);
            n--;
        }
        int i = 1;
        while(n!=0){
            a.push_back(i*-1);
            a.push_back(i);
            i++;
            n--;
            n--;
        }
        return a;

    }
};