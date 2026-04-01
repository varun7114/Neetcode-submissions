class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        for(int i = 0; i <= nums.size()-1;i++){
            res = res ^ nums[i];
        }
        return res;
    }
};
