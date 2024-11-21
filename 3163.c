char* compressedString(char* word) {
    char* chars = (char*)malloc(sizeof(char) * 2 * (strlen(word) + 1));
    int size = 0;
    int wordsize = strlen(word);
    for (int i = 0; i < wordsize; i++) {
        int count = 1;
        int j;
        for (j = i + 1; j < wordsize; j++) {
            if (word[j] == word[i])
                count = count + 1;
            if (word[j] != word[i])
                break;
        }
        if (count >= 1 && count <= 9) {
            chars[size++]=count+'0';
            chars[size++] = word[i];
        } else if (count > 9) {
            while (count > 0) {
                if (count > 9) {
                    chars[size++]= 9 + '0';
                    chars[size++] = word[i];
                    count=count-9;
                } else {
                    chars[size++]= count + '0';
                    chars[size++] = word[i];
                    count = count-9;
                }
            }
        }
        i=j-1;
    }

chars[size++] = '\0';
chars = (char*)realloc(chars, sizeof(char) * size);
return chars;
}