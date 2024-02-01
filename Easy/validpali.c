bool isAlphanumeric(char c) {
    return isalnum(c) != 0;
}

char toLower(char c) {
    return tolower(c);
}

bool isPalindrome(const char* s) {
    int cleanedIndex = 0;
    int inputLength = 0;
   while (s[inputLength] != '\0') {
        inputLength++;
    }

    char* cleanedStr = (char*)malloc((inputLength + 1) * sizeof(char));

    if (cleanedStr == NULL) {
        return false;
    }

    for (int i = 0; s[i] != '\0'; i++) {
        if (isAlphanumeric(s[i])) {
            cleanedStr[cleanedIndex++] = toLower(s[i]);
        }
    }
    cleanedStr[cleanedIndex] = '\0';
    int left = 0, right = cleanedIndex - 1;
    while (left < right) {
        if (cleanedStr[left] != cleanedStr[right]) {
            free(cleanedStr); 
            return false;
        }
        left++;
        right--;
    }

    free(cleanedStr); 
    return true;
}