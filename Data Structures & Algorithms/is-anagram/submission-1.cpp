class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> tally;
        if (s.size()!=t.size()) return false;

        for (int i=0; i<s.size(); i++){
            tally[s[i]]++;
            tally[t[i]]--;
        }
        for (auto pair : tally){
            if (pair.second!=0) return false;
        }
        return true;


    }
};
