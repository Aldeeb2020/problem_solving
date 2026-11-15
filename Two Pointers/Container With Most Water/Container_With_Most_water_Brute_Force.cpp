class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_area = 0;
        for(int i = 0; i < height.size(); i++){
            int current_area = 0;
            for(int j = i + 1; j < height.size(); j++){
                int min_side = min(height[i], height[j]);
                int width = j - i;
                int area = min_side * width;
                current_area = max(area, current_area);
            }
            max_area = max(current_area, max_area);
        }
        return max_area;
    }
};