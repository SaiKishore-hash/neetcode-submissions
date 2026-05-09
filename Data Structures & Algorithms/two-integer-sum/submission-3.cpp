class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> notebook;
        for (int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
            if (notebook.count(complement)) return {notebook[complement],i};
            notebook[nums[i]]=i;
        }
    }
};
