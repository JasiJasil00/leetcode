1class Solution {
2public:
3    int countbits(int n){
4        int count = 0;
5        while(n!=0){
6            n= n&(n-1);
7            count++;
8        }
9        return count;
10    }
11    vector<int> sortByBits(vector<int>& arr) {
12        map<int,int> hash;
13        for(int i = 0 ; i < arr.size() ; i++){
14            hash[arr[i]]=countbits(arr[i]);
15        }
16        for(int i = 0 ; i < arr.size()-1 ; i++){
17            for(int j = i+1; j < arr.size() ; j++){
18                if(hash[arr[i]] > hash[arr[j]]){
19                    swap(arr[i],arr[j]);
20                }else if(hash[arr[i]]==hash[arr[j]] && arr[i] > arr[j]){
21                     swap(arr[i],arr[j]);
22                }
23            }
24        }
25        return arr;
26    }
27};