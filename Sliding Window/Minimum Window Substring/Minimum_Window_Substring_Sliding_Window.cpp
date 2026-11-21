class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> needed;
        unordered_map<char, int> covered;
        int left = 0;
        int start = 0;
        int minimum = INT_MAX;
        for(char ch:t){
            needed[ch]++;
        }
        int formed = needed.size();
        for(int right = 0; right < s.size(); right++){
            if(needed.contains(s[right])){
                covered[s[right]]++;
                if(covered[s[right]] == needed[s[right]]){
                    formed--;
                }
            }
            // VALID AND SHRINK
            while(formed == 0){
                // CHECK MINIMUM
                if(right - left + 1 < minimum){
                    minimum = right - left + 1 ;
                    start = left;
                }
                if(needed.contains(s[left])){
                    covered[s[left]]--;
                    if(covered[s[left]] < needed[s[left]]){
                        formed++;
                    }
                }
                left++;
            }
        }
        return minimum == INT_MAX ? "":s.substr(start, minimum);
    }
};