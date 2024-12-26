/*class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())return "";

        int  n=strs.size();
        int i;
        
        sort(strs.begin(),strs.end());
        
        string first=strs[0];
        string last=strs[n-1];
        if(first.empty()) return "";

        string result="";
        for(i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                break;   
            }
            result +=first[i];
        }
        return result;
    }
};*/