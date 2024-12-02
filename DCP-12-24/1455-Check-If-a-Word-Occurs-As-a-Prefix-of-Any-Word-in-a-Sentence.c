int isPrefixOfWord(char* sentence, char* searchWord) {
    int i = 0;
    int k = 0;
    int count=1;
    int key=-1;
    int flag =0;
    while( sentence[i]!='\0' ){
        while(((i-1>-1 && sentence[i-1]==' ' )||(i==0))&& sentence[i+k]==searchWord[k] ){
            k++;
            if(searchWord[k]=='\0'){ 
                key=count;
                flag=1;
                break;
            }
        }
        k=0;
        if(flag==1)break;
        if(sentence[i]==' '){
            count++;
        }
        i++;
    }
    return key;
}