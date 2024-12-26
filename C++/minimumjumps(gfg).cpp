//THIS is using dp which took O(n^2)tc 
/*class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        if(n<=1) return 0;
        if(arr[0]==0) return -1;
        vector<int>dp(n,INT_MAX);
        dp[0]=0;
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++){
                if(j+arr[j]>=i && dp[j]!=INT_MAX)
                {
                    dp[i] = min(dp[i],dp[j]+1);
                }
            }
        }
        return dp[n-1] == INT_MAX ? -1 : dp[n-1];
    }
};*/
//Now using greedy approach to optimize to O(n)tc
/* class Solution {
  public:
    int minJumps(vector<int>& arr) {
        int n=arr.size();
        if(n<=1) return 0;
        if(arr[0]==0) return -1;
        
        int jumps=0;
        int currentend=0;
        int farthest=0;
        
        for(int i=0;i<n-1;i++)
        {
            farthest=max(farthest,i+arr[i]);
            
            if(i==currentend){
                jumps++;
                currentend=farthest;
                
                if(currentend>=n-1) return jumps;
            }
        }
        return -1;
    }*/