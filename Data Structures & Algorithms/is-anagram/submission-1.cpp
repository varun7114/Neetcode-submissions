#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        // 1. Length check
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> freq;

        // 2. Count characters in s
        for (char c : s) {
            freq[c]++;
        }

        // 3. Decrement using t and fail fast
        for (char c : t) {
            freq[c]--;
            if (freq[c] < 0)
                return false;
        }

        // 4. All counts balanced
        return true;
    }
};
