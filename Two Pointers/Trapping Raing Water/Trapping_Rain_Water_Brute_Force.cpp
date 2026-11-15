class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        for(int i = 0; i < height.size(); i++){
            // max_left 
            int max_left = 0;
            int left = i - 1;
            while(left >= 0){
                max_left = max(max_left, height[left]);
                left--;
            }
            // max_right 
            int max_right = 0;
            int right = i + 1;
            while(right < height.size()){
                max_right = max(max_right, height[right]);
                right++;
            }
            
            // Calc Water 
            int calcWater = max(0, min(max_left, max_right) - height[i]);
            water += calcWater;
        }
        return water;

    }
};