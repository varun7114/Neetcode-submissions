class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int currentStreak = 0;
        int maxStreak = 0;
        
        
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        int n = nums.size();

        for(int i = 0; i < n-1; i++){
            int diff = nums[i+1] - nums[i];
            if(diff == 1)
                currentStreak++;
            else{
                if(currentStreak > maxStreak){
                    maxStreak = currentStreak;
                    currentStreak = 0;
                    }
                else
                    currentStreak = 0;
            }
        }

        return max(currentStreak+1, maxStreak+1);
    }
        
};
