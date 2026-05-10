class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> notebook;

        for (int i=0; i<nums.size(); i++){
            if (notebook.count(nums[i])) return true;
            notebook.insert(nums[i]);
        }
        return false;
    }
};