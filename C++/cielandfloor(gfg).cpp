/*    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int n=arr.size();
        int low=0,high=n-1;
        vector<int>ans(2,-1);
        sort(arr.begin(),arr.end());
        
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=x){
                ans[1]=arr[mid];
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        
        low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<=x){
                ans[0]=arr[mid];
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }*/