class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry = 1;  // start with the +1

        for (int i = n - 1; i >= 0; i--) {
            int sum = digits[i] + carry;

            if (sum > 9) {
                digits[i] = 0;
                carry = 1;
            } else {
                digits[i] = sum;
                carry = 0;
                break;
            }
        }

        if (carry) {
            digits.insert(digits.begin(), 1);
        }

        return digits;
    }
};