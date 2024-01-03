char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) 
        return "";

    for (int i = 0; i < strlen(strs[0]); i ++) 
    {
        char c = strs[0][i];

        for (int j = 1; j < strsSize; j ++) 
        {
            if (i == strlen(strs[j]) || strs[j][i] != c)
            {
                strs[0][i] = 0;
                return strs[0];
            }
        }
    }

    return strs[0];
}