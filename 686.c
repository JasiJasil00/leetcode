int max( int a, int b ){
    return (a>b)?a:b;
}
void badcharheurestic(char * str , int size , int * badchar){

    for(int i =0 ; i < 256 ; i ++ ){
        badchar[i]=-1;
    }

    for(int i = 0 ; i < size ; i ++){
        badchar[(int)str[i]]=i;
    }

}

int boyersearch(char * str , char * patt){
    int m = strlen(str);
    int n = strlen(patt);
    if(m < n)return -1;

    int badchar[256];

    badcharheurestic(patt,n,badchar);
    int s =0;
    while(s<=(m-n)){
        int j = n-1;
        
        while( j >= 0 &&  patt[j]==str[j+s])j--;

        if(j < 0){
            s+=((s+n)<m)? n-badchar[str[s+n]]:1;
            return 1;
        }else{
            s+=max(1,j-badchar[str[s+j]]);
        }
    }
    return -1;
}


int repeatedStringMatch(char* a, char* b) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int count = 1;
    
    // Allocate initial memory for `temp` with enough space for the first copy of `a`
    char *temp = (char *)malloc((lenA * 2 + 1) * sizeof(char));
    strcpy(temp, a);

    // Keep appending `a` to `temp` until `temp` length is at least `lenB`
    while (strlen(temp) < lenB) {
        temp = (char *)realloc(temp, (strlen(temp) + lenA + 1) * sizeof(char));
        strcat(temp, a);
        count++;
    }

    // Check if `b` is now a substring of `temp`
    if (boyersearch(temp, b) != -1) {
        free(temp);
        return count;
    }

    // Append one more `a` to cover cases where `b` might overlap
    temp = (char *)realloc(temp, (strlen(temp) + lenA + 1) * sizeof(char));
    strcat(temp, a);
    count++;

    if (boyersearch(temp, b) != -1) {
        free(temp);
        return count;
    }

    // If no match found
    free(temp);
    return -1;
}