/*vector<int> leaders(vector<int>& arr) {
        vector<int>result;
        int n=arr.size();
        if(n==0) return result;
        
        int maxright=arr[n-1];
        result.push_back(maxright);
        
        for(int i=n-2;i>=0;i--){
            if(arr[i]>=maxright){
                maxright=arr[i];
                result.push_back(arr[i]);
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }*/