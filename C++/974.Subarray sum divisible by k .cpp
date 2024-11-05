/*class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int ,int >mp;
        int cntsum=0;
        int ans=0;
        mp[0]++;
        for(auto x:nums)
        {
            cntsum+=x;
            int mod=(cntsum%k+k)%k;
            if(mp.find(mod)!=mp.end()){
                ans+=mp[mod];
            }mp[mod]++;
        }
        return ans;

    }
};*/