class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if (s.size() == 0) return 0;
        
        int cl = 1, ml = 1;
        int i;
        int pidx;
        unordered_map<char, int> m;
        
        for (i = 0; i < s.size(); i++) {
            m[s[i]] = -1;
        }
        
        m[s[0]] = 0;
        
        for (i = 1; i < s.size(); i++) {
            pidx = m[s[i]];
            
            if (pidx == -1 || i - cl > pidx) {
                cl++;
            }else {
                if (cl > ml) {
                    ml = cl;
                }
                cl = i - pidx;
            }
            
            m[s[i]] = i;
        }
        
        if (cl > ml) {
            ml = cl;
        }
        
        return ml;
    }
};