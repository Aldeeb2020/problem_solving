class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> groups;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i - 1])  continue;
            for(int j = i+ 1; j < n; j++){
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                for(int k = j + 1; k < n; k++){
                    if(k > j + 1 && nums[k] == nums[k - 1]) continue;
                    int sum = nums[i]  + nums[j] + nums[k];
                    if(sum == 0){
                        groups.push_back({nums[i], nums[j], nums[k]});
                    }

                }
            }
        }
        return groups;
    }
};