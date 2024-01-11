int climbStairs(int n) {
    int p,q,k,i;
    if(n==1) return 1;
    if (n==2) return 2;

    p=2; //ways to climb current step
    q=1; //ways to climb previous step 

    for (i=3;i<=n;i++)
    {
        k=p+q;
        q=p;
        p=k;
    }
    return k ;
}