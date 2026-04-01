class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());

        int i = 0;
        int l;
        int r;

        while(i < (int)nums.size() - 2){
            if (i > 0 && nums[i] == nums[i-1]) {
                i++;
                continue;
            }
            l = i + 1;
            r = nums.size() - 1;

            while(l < r){
                int sum= nums[i]+nums[l]+nums[r];
                if(sum == 0){
                    result.push_back({nums[i], nums[l], nums[r]});
                    while (l < r && nums[l] == nums[l+1]) l++;
                    while (l < r && nums[r] == nums[r-1]) r--;
                    l++;
                    r--;
                }
                else if(sum > 0){
                    r--;
                }
                else
                    l++;
            }
            i++;
        }

        return result;

    }
};