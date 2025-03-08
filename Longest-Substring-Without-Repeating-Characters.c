int lengthOfLongestSubstring(char* s) {
    int * a = (int *)calloc(256,sizeof(int));
    int i = 0;
    int start = 0;
    int max=0;
    while(s[i]!='\\0'){
       if(a[s[i]]>start){
        start = a[s[i]];
       }
       if(max < i - start + 1 ){
        max = i - start + 1 ;
       }
       a[s[i]]=i+1;
       i++;
    }
    return max;
}
