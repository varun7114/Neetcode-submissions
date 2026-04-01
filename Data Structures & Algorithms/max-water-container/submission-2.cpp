class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right  = heights.size() - 1;
        int maxArea = 0;
        while(left < right){

            int length = right - left;
            int breadth = min(heights[left], heights[right]);
            int area = length * breadth;
            
            if(area > maxArea)
                maxArea = area;
            
            if(heights[left] > heights[right])
                right --;
            else
                left++;

        }
        return maxArea;
    }
};
