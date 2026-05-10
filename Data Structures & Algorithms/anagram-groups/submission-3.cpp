class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> notebook;

        for (auto s : strs){
            string root = s;
            sort(root.begin(),root.end());
            notebook[root].push_back(s);
        }

        vector<vector<string>> result;

        for (auto pair : notebook){
            result.push_back(pair.second);
        }

        return result;
    }
};
