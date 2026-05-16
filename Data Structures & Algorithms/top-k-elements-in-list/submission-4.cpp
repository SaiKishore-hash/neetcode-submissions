class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> tally;

        for (auto n : nums){
            tally[n]++;
        }

        vector<pair<int,int>> frequencypair;

        for (auto x : tally){
            frequencypair.push_back({x.second,x.first});
        }
        sort(frequencypair.rbegin(),frequencypair.rend());

        vector<int> result;
        for (int i=0; i<k; i++){
            result.push_back(frequencypair[i].second);
        }
        return result;
    }
};
