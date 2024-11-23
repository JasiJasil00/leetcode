char* intToRoman(int num) {
    char* c = (char*)malloc(sizeof(char)*3);
    if (c == NULL) {
            return NULL;  // Memory allocation failed
    }
    int found = 1;
    int i = 0;
    while (found == 1) {
        if (num / 1000 > 0) {
            c[i++] = 'M';
            num = num - 1000;
        }else if (num / 900 > 0) {
            c[i++] = 'C';
            c[i++] = 'M';
            num = num -  900;
        } else if (num / 500 > 0) {
            c[i++] = 'D';
            num = num -  500;
        }else if (num / 400 > 0) {
            c[i++] = 'C';
            c[i++] = 'D';
            num = num -  400;
        } else if (num / 100 > 0) {
            c[i++] = 'C';
            num = num -  100;
        }else if (num / 90 > 0) {
            c[i++] = 'X';
            c[i++] = 'C';
            num = num -  90;
        } else if (num / 50 > 0) {
            c[i++] = 'L';
            num = num -  50;
        }else if (num / 40 > 0) {
            c[i++] = 'X';
            c[i++] = 'L';
            num = num -  40;
        } else if (num / 10 > 0) {
            c[i++] = 'X';
            num = num -  10;
        }else if (num / 9 > 0) {
            c[i++] = 'I';
            c[i++] = 'X';
            num = num -  9;
        } else if (num / 5 > 0) {
            c[i++] = 'V';
            num = num -  5;
        }else if (num / 4 > 0) {
            c[i++] = 'I';
            c[i++] = 'V';
            num = num -  4;
        } else if (num / 1 > 0) {
            c[i++] = 'I';
            num = num -  1;
        }
        c = (char*)realloc(c, (3 + i) * sizeof(char));
        if (c == NULL) {
            return NULL;  // Memory allocation failed
        }
        if (num <= 0) {
            found = 0;
            break;
        }
    }
    c[i]='\\0';
    return c;
}