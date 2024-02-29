int* grayCode(int n, int* returnSize) {
    int i, j;
    int *p, psz, pn;
    
    psz = 1 << n;
    p = malloc(psz * sizeof(int));
    //assert(p);
    
    pn = 0;
    p[pn ++] = 0;
    for (i = 0; i < n; i ++) {
        for (j = pn - 1; j >= 0; j --) {
            p[pn ++] = p[j] | (1 << i);
        }
    }
    
    *returnSize = pn;
    
    return p;
}