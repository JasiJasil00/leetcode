int minimumRecolors(char* blocks, int k) {  
    int i = 0;
    int count =0;
    while( blocks[i]!='\0'){
        if(blocks[i]=='B' && count < k){
            count++;
        }else if(blocks[i] == 'B' && count == k){
            return 0;
        }else if(blocks[i] == 'W' ){
            count=0;
        }
        i++;
    }
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