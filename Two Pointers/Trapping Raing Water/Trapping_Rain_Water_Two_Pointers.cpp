class Solution {
public:
    int trap(vector<int>& height) {
        int max_left = 0;
        int max_right = 0;
        int water = 0;
        int left = 0;
        int right = height.size() - 1;
        while(left < right){
            if(height[left] <= height[right]){
                if(height[left] >= max_left){
                    max_left = height[left];
                }else{
                    water += max_left - height[left];
                }
                left++;
            }else{
                if(height[right] >= max_right){
                    max_right = height[right];
                }else{
                    water += max_right - height[right];
                }
                right--;                
            }
        }
        return water;
    }
};