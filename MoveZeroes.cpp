class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> zidx;
        int i, j;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zidx.push_back(i);
            }
        }
        
        zidx.push_back(nums.size());
        
        for (i = 0; i < zidx.size() - 1; i++) {
            for (j = zidx[i] - i; j < zidx[i+1] - i - 1; j++) {
                nums[j] = nums[j + 1 + i];
            }
        }
        
        for (i = 1; i < zidx.size(); i++) {
            nums[nums.size() - i] = 0;
        }
    }
};