class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        if(nums.size() == 0) return false;
        if(nums.size() == 1) return false;

        unordered_set<int> seen;
        for(int x: nums){
            if(seen.count(x))
                return true;
            else
                seen.insert(x);
        }

        return false;
    }
};