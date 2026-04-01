class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int maxlength = 0;
        unordered_set<char>seen;

        for(int r = 0; r < s.size(); r++){
            while(seen.count(s[r])){
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            maxlength = max(maxlength, r - l + 1);
        }
        return maxlength;
    }
};
