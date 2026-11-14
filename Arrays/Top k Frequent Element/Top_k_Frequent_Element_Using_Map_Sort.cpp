class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> map;
        for(const auto& num:nums){
            map[num]++;
        }
        vector<pair<int, int>> arr(map.begin(), map.end());
        sort(arr.begin(), arr.end(), [](const auto&a, const auto&b){
            return a.second > b.second;
        });
        vector<int> result;
        for(const auto& pair:arr){
            result.push_back(pair.first);
            if(result.size() == k) break;
        }
        return result;
    }
};