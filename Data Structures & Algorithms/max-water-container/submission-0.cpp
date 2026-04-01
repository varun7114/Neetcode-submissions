class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int left = 0;
        int right = heights.size()-1;
        int maxArea = 0;

        while(left < right){
            int currentArea = min(heights[left], heights[right]) * (right-left);
            
            if(currentArea > maxArea) {
                maxArea = currentArea;
            }

            if(heights[left] > heights[right]) right--;
            else left++;

        }
    return maxArea;
    }
};
