char* addSpaces(char* s, int* spaces, int spacesSize) {
    char * attach=(char *)malloc(sizeof(char)*((2*(strlen(s))+1)));
    int i =0;
    int j =0;
    int k= 0;
    while( s[i]!='\0' ){
        if(j<spacesSize && i==spaces[j]){
            attach[k++]=' ';
            j++;
        }
        attach[k++]=s[i++];
    }
    attach[k]='\0';
    k++;
    attach=(char*)realloc( attach ,k*sizeof(char));
    return attach;
}