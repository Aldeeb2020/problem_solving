class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        set<int> set;
        for(const int &num:nums){
            if(set.contains(num)) return true;
            set.insert(num);
        }
        return false;
    }
};