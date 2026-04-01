class Solution {
public:
    int maxArea(vector<int>& heights) {
        
        int l = 0;
        int r = heights.size() - 1;
        int max_area = 0;
        while(l < r){
            
            int width = r - l;
            int height = min(heights[l], heights[r]);
            int current_area = width * height;

            if(current_area > max_area){
                max_area = current_area;
            }
            else{
                if(heights[l] > heights[r]) r--;
                else l++;
            }

        }

        return max_area;

    }
};
