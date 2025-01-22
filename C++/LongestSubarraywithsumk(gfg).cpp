/*int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> prefixMap;
        int sum = 0, maxlen = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            if (sum == k) { 
                maxlen = i + 1;  
            }
            if (prefixMap.find(sum - k) != prefixMap.end()) {
                maxlen = max(maxlen, i - prefixMap[sum - k]);
            }
            if (prefixMap.find(sum) == prefixMap.end()) {
                prefixMap[sum] = i;  
            }
        }
        return maxlen;
    }*/