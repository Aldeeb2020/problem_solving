class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> map;
        for(int j = 0; j < s.size(); j++){
            map[s[j]]++;
            map[t[j]]--;
        }
        for(auto& p:map){
            if(p.second != 0) return false;
        }
        return true;
    }
};