class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i = 0, j = 0, temp, cnt = 0;
        
        sort(nums.begin(), nums.end());
        
        while (1) {
            temp = nums[i];
            for (j = i; j < nums.size(); j++) {
                
                if (cnt > nums.size() / 2) return temp;
                
                if (nums[j] == temp) {
                    cnt++;
                }else {
                    cnt = 0;
                    i = j;
                    break;
                }
            }
        }
        
        return -1;
    }
};