class Solution {
public:
    int reverse(int x) {
        
        bool isN = false;
        
        long long y = x;
        long long ans = 0;
        
        if (y < 0) { isN = true; y = -y;}
        
        while (y != 0) {
            ans *= 10;
            ans += y % 10;
            y /= 10;
        }
        
        if (ans > INT_MAX) return 0;

        if (isN) return (int)(-ans);
        else return (int)ans;
    }
};