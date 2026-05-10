class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> tally;
        for (auto n : nums){
            tally[n]++;
        }
        vector<tuple<int,int>> frequency;
        for (auto x : tally){
            frequency.push_back({x.second, x.first});
        }
        sort(frequency.rbegin(), frequency.rend());

        vector<int> result;
        for (int i=0; i<k; i++){
            result.push_back(get<1>(frequency[i]));
        }
        return result;

    }
};
