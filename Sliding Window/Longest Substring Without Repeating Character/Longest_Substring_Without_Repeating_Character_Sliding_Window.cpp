class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longest = 0;
        int left = 0;
        int n = s.size();
        unordered_set<char> set;
        for(int right = 0; right < n; right++){
            // SHRINK
            while(set.contains(s[right])){
                set.erase(s[left++]);
            }
            set.insert(s[right]);
            int window = right - left + 1;
            longest = max(longest, window);
        }
        return longest;
    }
};