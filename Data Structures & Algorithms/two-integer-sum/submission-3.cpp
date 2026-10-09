class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> premap;
        int sz = nums.size();

        for(int i = 0; i < sz; i++)
        {
            int diff = target - nums[i];
            if(premap.find(diff) != premap.end())
            {
                return {premap[diff], i};
            }
            premap.insert({nums[i], i}); 
        }

        return {};
    }
};
