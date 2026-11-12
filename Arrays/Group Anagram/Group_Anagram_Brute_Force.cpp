class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        int n = strs.size();
        unordered_set<string> visited;
        for(int i = 0; i < n; i++){
            string sorted_flag = strs[i];
            sort(sorted_flag.begin(), sorted_flag.end());
            if(visited.contains(sorted_flag)) continue;
            visited.insert(sorted_flag);
            vector<string> group;
            for(int j = i; j < n; j++){
                string current_sorted = strs[j];
                sort(current_sorted.begin(), current_sorted.end());
                if(current_sorted == sorted_flag){
                    group.push_back(strs[j]);
                }
            }
            result.push_back(group);
        }
        return result;
    }
};