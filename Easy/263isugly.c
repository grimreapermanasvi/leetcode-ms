bool isUgly(int num) {
    int pf[] = { 2, 3, 5 };
    int i = sizeof(pf) / sizeof(pf[0]);
    while (num && -- i >= 0) {
        while (!(num % pf[i])) {
            num = num / pf[i];
            }
    }
 return num == 1 ? true : false;
}