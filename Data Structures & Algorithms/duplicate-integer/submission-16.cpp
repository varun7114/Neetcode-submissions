class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size() == 0) return false;
        if(nums.size() == 1) return false;

        unordered_set<int> freq;

        for(int x: nums){
            if(freq.find(x) != freq.end())
                return true;
            else
                freq.insert(x);
        }
        return false;
    }
};