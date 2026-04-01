class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);

        // Left Pass: store prefix products
        int left_p = 1;
        for (int i = 0; i < n; i++) {
            output[i] = left_p;
            left_p *= nums[i];
        }

        // Right Pass: multiply suffix products
        int right_p = 1;
        for (int i = n - 1; i >= 0; i--) {
            output[i] *= right_p;
            right_p *= nums[i];
        }

        return output;
    }
};