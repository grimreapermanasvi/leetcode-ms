/*vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        long long sumN = (long long)n * (n + 1) / 2;
        long long sumN2 = (long long)n * (n + 1) * (2 * n + 1) / 6;
    
        long long sumA = 0, sumA2 = 0;
    
        for (int num : arr) {
            sumA += num;
            sumA2 += (long long)num * num;
        }
    
        long long diff1 = sumN - sumA;         // missing - repeating
        long long diff2 = sumN2 - sumA2;       // missing² - repeating²
    
        long long sum = diff2 / diff1;         // missing + repeating
    
        int missing = (sum + diff1) / 2;
        int repeating = sum - missing;
        return {repeating,missing};
    }*/