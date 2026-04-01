class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> freq;
        for(int x: nums)
            freq[x]++;
        
        vector<pair<int, int>> data;
        for(const auto& it: freq){
            data.push_back({it.second, it.first});
        }
        sort(data.rbegin(), data.rend());
        vector<int> result;
        
        for(int i = 0; i < k; i++){
            result.push_back(data[i].second);
        }
        return result;
    }
};
