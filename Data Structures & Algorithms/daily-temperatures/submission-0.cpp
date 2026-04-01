
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = (int)temperatures.size();
        vector<int> ans(n, 0);
        stack<int> st; // stores indices (days), not temperatures

        for (int i = 0; i < n; i++) {
            // If today's temp is warmer than the day at top of stack,
            // we can resolve that older day.
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevDay = st.top();
                st.pop();
                ans[prevDay] = i - prevDay; // days waited
            }
            // This day hasn't found a warmer day yet, so it waits.
            st.push(i);
        }

        return ans; // remaining days in stack stay 0 (no warmer day)
    }
};
