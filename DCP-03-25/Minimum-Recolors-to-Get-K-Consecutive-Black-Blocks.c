int minimumRecolors(char* blocks, int k) {  
    int i = 0;
    int count =0;
    count = 101;
    i = 0;
    while(blocks[i+k-1]!='\0'){
        int c=0;
        for(int j = i ; j < i + k ; j++ ){
            if(blocks[j]=='W')c++;
        }
        if(c<count)count=c;
        i++;
    }
    return count;

}