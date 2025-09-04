class Solution {
public:
    int findClosest(int x, int y, int z) {
        int person1 = z - x;
        if(person1<0)person1 = -1 * person1;
        int person2 = z - y;
        if(person2 < 0 )person2 = -1 * person2;
        if(person1==person2)return 0;
        if(person1>person2) return 2; else return 1; 
        return 0;
    }
};