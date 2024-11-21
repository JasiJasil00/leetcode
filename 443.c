int compress(char* chars, int charsSize) {
    int size = 0 ;
    for(int i = 0; i < charsSize ; i ++){
        int count = 1;
        int j;
        for(j = i+1 ; j < charsSize ; j ++){
            if(chars[j]==chars[i])count=count+1;
            if(chars[j]!=chars[i])break;
        }
        chars[size++]=chars[i];
        if(count>1){
        char countStr[12];  // Enough space for any int converted to a string
            sprintf(countStr, "%d", count);  // Convert count to string
            for (int k = 0; countStr[k] != '\0'; k++) {
                chars[size++] = countStr[k];
            }
        }    
        i=j-1;
    }
    
    return size;
}