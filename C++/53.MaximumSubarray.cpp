//****Optimal Solution  :TC O(n) SC O(1) ****//
/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int sum=0;
        int i;
        for(i=0;i<nums.size();i++)  //here used nums.size() to get the number of elements in the vector .
        {
            sum=sum+nums[i];
            if(sum>maxi)
            {
                maxi=sum;
            }
            if(sum<0)
            {sum=0;}
        }
        return maxi;
    }
}; */

//****Better Solution : TC O(N^2) SC O(1) */
/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)      
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                maxi=max(sum,maxi);
            }

        }
        return maxi;
    }
};*/

//*****Brute force : TC O(N^3) SC O(1) */
/*class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int  maxi=INT_MIN;
        int i,j,k;
        for(i=0;i<nums.size();i++){
            for(j=i;j<nums.size();j++){
                int sum=0;
                for(k=i;k<=j;k++)
                {
                    sum=sum+nums[k];
                   
                } maxi=max(sum,maxi);
            }
        }
        return maxi;
    }
};*/
