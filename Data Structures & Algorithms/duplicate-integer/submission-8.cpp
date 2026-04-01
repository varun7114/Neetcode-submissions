class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        if(nums.size() ==0 ) return false;
        if(nums.size() == 1) return false;

        for(int i = 0; i <= nums.size()-2; i++){
            for(int j = i+1; j <= nums.size()-1; j++){
                if(nums[j] == nums[i]) return true;
            }
        }
        return false;
    }
};