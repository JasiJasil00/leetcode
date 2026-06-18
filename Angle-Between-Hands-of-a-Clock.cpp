1class Solution {
2public:
3    double angleClock(int hour, int minutes) {
4        double first = (hour + (double)minutes / 60.0) * 5.0;
5        double second = minutes;
6
7        double ratio = 180.0 / 30.0; 
8
9        double ans = ratio * (first - second);
10
11        if (ans < 0) ans *= -1;
12
13        if (ans > 180) ans = 360 - ans;
14
15        return ans;
16    }
17};