class Solution {
public:
    bool isPalindrome(string s) {
        string temp1 = "";
        string temp2 = "";

        for (unsigned char c : s) {
            if (isalnum(c)) {
                temp1.push_back(tolower(c));
            }
        }

        temp2 = temp1;

        int l = 0;
        int r = temp1.size() - 1;
        while (l < r) {
            swap(temp1[l], temp1[r]);
            l++;
            r--;
        }

        return temp1 == temp2;
    }
};
