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
            if(lmax < rmax){
                l++;
                lmax = max(lmax, height[l]);
                total = total + lmax - height[l];
            }
            else{
                r--;
                rmax = max(rmax, height[r]);
                total = total +rmax - height[r];
            }
        }

    return total;
    }
};
