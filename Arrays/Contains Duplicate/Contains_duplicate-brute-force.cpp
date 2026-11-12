class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[j] == nums[i]) return true;
            }
        }
        return false;
    }
};