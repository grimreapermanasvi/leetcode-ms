/*class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        int presum = 0, cnt = 0;
        mpp[0] = 1; // To handle the case when a subarray sum equals k from the start

        for (int i = 0; i < n; i++) {
            presum += nums[i];
            int remove = presum - k;
            cnt += mpp[remove];
            mpp[presum] += 1;
        }

        return cnt;
    }
  
};*/