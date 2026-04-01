class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxStreak = 0;

        for (int x : numSet) {
            // only start counting if x is the START of a sequence
            if (numSet.count(x - 1) == 0) {
                int currentStreak = 1;
                int currentNum = x;

                while (numSet.count(currentNum + 1)) {
                    currentNum++;
                    currentStreak++;
                }

                maxStreak = max(maxStreak, currentStreak);
            }
        }

        return maxStreak;
    }
};
