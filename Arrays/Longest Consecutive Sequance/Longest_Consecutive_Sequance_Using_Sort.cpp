class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int longest = 1;
        int count = 1;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1]) continue;
            if(nums[i] - 1 == nums[i - 1]){
                count++;
                longest = max(longest, count);
            }else{
                count = 1;
            }
        }
        return longest;
    }
};