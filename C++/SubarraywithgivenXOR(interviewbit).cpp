/*int Solution::solve(vector<int> &A, int B) {
    int xr=0;
    map<int,int>mpp;
    int n=A.size();
    mpp[xr]++;
    int cnt=0;
    for(int i=0;i<n;i++){
        xr=xr^A[i];
        int x=xr^B;
        cnt+=mpp[x];
        mpp[xr]++;
        
    }
    return cnt ;
}*/