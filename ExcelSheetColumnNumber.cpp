class Solution {
public:
    int titleToNumber(string s) {
        int i, ans = 0;
        
        for (i = 0; i < s.size(); i++) {
            ans += pow(26, i) *(s[s.size() - i - 1] - 'A' + 1);
        }
        
        return ans;
    }
};