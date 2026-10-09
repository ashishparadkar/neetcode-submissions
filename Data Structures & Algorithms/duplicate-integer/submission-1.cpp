class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> temp(nums.begin(),nums.end());
        return temp.size() < nums.size();
    }
};