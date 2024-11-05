//Optimal Code   : TC O(N) SC O(N)

/*class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int posindex=0;
        int negindex=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                ans[negindex]=nums[i];
                negindex+=2;
            }
            else{
                ans[posindex]=nums[i];
                posindex+=2;
            }
        }
        return ans;
    }
};*/

//Now if we have unequal number of pos and neg sign elements
/*class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int posindex=0;
        int negindex=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                ans[negindex]=nums[i];
                negindex+=2;
            }
            else{
                ans[posindex]=nums[i];
                posindex+=2;
            }
        }
        if(pos.size()>neg.size())
        {
        for(int i=0;i<neg.size();i++){
            ans[2*i]=pos[i];
            ans[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=neg.size();i<pos.size();i++){
            a[index]=pos[i];
            index++;
        }
        else
        {
            for(int i=0;i<pos.size();i++){
                ans[2*i]=pos[i];
                ans[2*i+1]=neg[i];
        }
        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++){
            a[index]=neg[i];
            index++;
        }
        }
        return ans;
    }
};*/