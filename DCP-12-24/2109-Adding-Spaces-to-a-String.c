char* addSpaces(char* s, int* spaces, int spacesSize) {
   // Determine the length of the final string
    int sLen = strlen(s);
    int newLen = sLen + spacesSize; // Additional spaces
    char* result = (char*)malloc((newLen + 1) * sizeof(char)); // Allocate memory
    if (!result) return NULL; // Return NULL if allocation fails

    int prev = 0, resultIndex = 0;

    // Iterate over the spaces array to split and add spaces
    for (int i = 0; i < spacesSize; i++) {
        int current = spaces[i];
        // Copy substring from 'prev' to 'current' index
        strncpy(result + resultIndex, s + prev, current - prev);
        resultIndex += current - prev;
        result[resultIndex++] = ' '; // Add space
        prev = current;
    }

    // Copy the remaining part of the string
    strcpy(result + resultIndex, s + prev);

    return result;
}