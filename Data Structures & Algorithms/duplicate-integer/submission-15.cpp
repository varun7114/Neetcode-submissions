class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> data;
        for(int n:nums){
            if(data.count(n))
                return true;
            else
                data.insert(n);
        }
        return false;
    }
};