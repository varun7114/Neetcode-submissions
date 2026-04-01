class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int window_length = s1.size();
        vector<int> freq1(26,0);
        for(char c: s1){
            freq1[c - 'a']++;
        }
        int l = 0;
        int r = window_length - 1;
        while(r < s2.size()){
            vector<int> freq2(26,0);
            for(char c: s2.substr(l, window_length)){
                freq2[c - 'a']++;
            }
            if(freq1 == freq2)
                return true;
            l++;
            r = l + window_length - 1;
        }
        return false;
    }
};
