bool isIsomorphic(char* s, char* t) {
    char a[128] = { 0 };
    char b[128] = { 0 };

    while (*s) {
        if (a[*s] == 0 && b[*t] == 0) {
            a[*s] = *t;
            b[*t] = *s;
        } else if (a[*s] != *t || b[*t] != *s) {
            return false;
        }
        s++;
        t++;
    }

    return true;
}