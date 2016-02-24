class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> p;

        for (int i = 0; i < nums.size(); ++i) {
            auto t = p.find(target - nums[i]);
            if (t != p.end()) {
                return {t->second, i};
            }

            p[nums[i]] = i;
        }
    }
};