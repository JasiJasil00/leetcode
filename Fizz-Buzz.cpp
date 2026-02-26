1class Solution {
2public:
3    vector<string> fizzBuzz(int n) {
4        vector<string> result;
5        for(int i = 0; i < n ; i++){
6            if((i+1)%15==0){
7                result.push_back("FizzBuzz");
8            }else if((i+1)%3==0){
9                result.push_back("Fizz");
10            }else if((i+1)%5==0){
11                result.push_back("Buzz");
12            }else{
13                result.push_back(to_string(i+1));
14            }
15        }
16        return result;
17    }
18};