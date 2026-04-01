class Solution {
public:
    int trap(vector<int>& height) {
      
      if(height.size() == 0) return 0;
      
      int total = 0;
      
      int l = 0;
      int r = height.size() - 1;
      
      int lmax = height[l];
      int rmax = height[r];

        while(l < r){
            lmax = max(lmax, height[l]);
            rmax = max(rmax, height[r]);
            if(lmax < rmax){
                total = total + lmax - height[l];
                l++;
            }
            else{
                total = total +rmax - height[r];
                r--;
            }
        }

    return total;
    }
};
