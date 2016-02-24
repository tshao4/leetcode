class Solution {
public:
    int romanToInt(string s) {
        
        int i = 0, ans = 0, cur = 0, prev = 0, temp = 0;
        
        for (i; i < s.size(); i++) {
            switch(s[i]) {
                case 'M': 
                    temp = 1000;
                    break;
                case 'D':
                    temp = 500;
                    break;
                case 'C':
                    temp = 100;
                    break;
                case 'L':
                    temp = 50;
                    break;
                case 'X':
                    temp = 10;
                    break;
                case 'V': 
                    temp = 5;
                    break;
                case 'I':
                    temp = 1;
                    break;
                default:
                    break;
            }
            
            prev = cur;
            cur = temp;
            ans += cur;
            
            if (prev < cur) {
                ans -= prev * 2;
            }
        }
        
        return ans;
    }
};