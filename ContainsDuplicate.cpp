class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        if (nums.empty()) return false;
        
        int i;
        
        sort(nums.begin(), nums.end());
        
        for (i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i+1]) return true;
        }
    }
};