/*class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        string ans = "";

        while (i < n) {
            // Skip leading spaces
            while (i < n && s[i] == ' ') {
                i++;
            }

            // Read the next word
            string temp = "";
            while (i < n && s[i] != ' ') {
                temp += s[i];
                i++;
            }

            // Add the word to the answer with a space if needed
            if (!temp.empty()) {
                if (!ans.empty()) {
                    ans = temp + " " + ans;
                } else {
                    ans = temp;
                }
            }
        }

        return ans;
    }
};*/