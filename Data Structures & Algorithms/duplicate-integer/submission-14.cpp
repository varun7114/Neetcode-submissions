class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> data;
        
        for(int x: nums){
            if(data.count(x))
                return true;
            else
                data.insert(x);
        }
        return false;
    }
};