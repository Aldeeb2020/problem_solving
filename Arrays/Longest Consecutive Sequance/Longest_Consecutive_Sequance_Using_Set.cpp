class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> set(nums.begin(), nums.end());
        int longest = 1;
        for(int num:set){
            if(!set.contains(num - 1)){
                int current = num;
                int count = 1;
                while(set.contains(current + 1)){
                    current++;
                    count++;
                    longest = max(count, longest);
                }
            }
        }
        return longest;
    }
};