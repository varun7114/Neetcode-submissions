class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.empty()) return false;
        if(t.empty()) return false;
        if(s.size() != t.size()) return false;

        unordered_map<char, int> freq;

        for(char c: s){
            freq[c]++;
        }

        for(char c: t){
            freq[c]--;
            if(freq[c] < 0)
                return false;
        }

        return true;


    }
};
