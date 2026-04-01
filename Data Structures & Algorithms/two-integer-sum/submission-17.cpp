class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

for (int i = 0; i < (int)nums.size(); i++) {
            int val = target - nums[i];

            auto it = find(nums.begin() + i + 1, nums.end(), val);
            if (it != nums.end()) {
                int j = (int)(it - nums.begin());
                return {i, j};
            }
        }
        return {};
    }
};
