class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> data;

        for(int c : nums){
            if(data.count(c))
                return true;
            else
                data.insert(c); 
        }

        return false;

    }
};