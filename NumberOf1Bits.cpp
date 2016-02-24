class Solution {
public:
    int hammingWeight(uint32_t n) {
        int c = 0, i;
        
        uint32_t base[31];

        for (i = 0; i < 31; i++) {
            base[i] = pow(2, i+1);
        }
        
        if (n >= base[30]) {
            c++;
        }
        
        if (n % base[0] == 1) {
            c++;
        }
        
        for (i = 1; i < 31; i++) {
            if (n % base[i] >= base[i-1])
                c++;
        }
        
        return c;
    }
};