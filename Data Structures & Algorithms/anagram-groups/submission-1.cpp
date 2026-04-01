class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> data;
        for(const auto& st: strs){
            vector<int>count(26,0);
            for(char c: st)
                count[c-'a']++;
            
            string key;
            for(int i = 0; i < 26; i++)
                key = key + "_" + to_string(count[i]);
            
            data[key].push_back(st);  
        }
        vector<vector<string>> result;
        for(const auto& pair: data)
            result.push_back(pair.second);
        return result;
    }
};
