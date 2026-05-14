class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> folders;

        for (auto s : strs){
            string root = s;
            sort(root.begin(), root.end());
            folders[root].push_back(s);
        }

        vector<vector<string>> result;

        for (auto x : folders){
           result.push_back(x.second); 
        }
        return result;
    }
};
