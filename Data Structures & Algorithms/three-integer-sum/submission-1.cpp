class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sz = nums.size();
        // sort the array
        sort(nums.begin(), nums.end());

        // build freq map count
        unordered_map<int, int> count;
        for (auto num : nums) {
            count[num]++;
        }

        // initialize empty list res
        vector<vector<int>> res;

        for (int i = 0; i < sz; i++) {
            // decrease the count of nums[i], so it won't be reused
            count[nums[i]]--;
            // skip duplicates of the first element.
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            // loop through each index j+1
            for (int j = i + 1; j < sz; j++) {
                // decrease the count of nums[j]
                count[nums[j]]--;
                // skip duplicates of second element
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                // compute needed third value
                int target = -(nums[i] + nums[j]);
                // if target still has a positive count, add the triplet
                if (count[target] > 0) {
                    res.push_back({nums[i], nums[j], target});
                }
            }

            // restore the counts for 2nd loop by adding back decremented value
            // for j loop
            for (int j = i + 1; j < sz; j++) {
                count[nums[j]]++;
            }
        }

        return res;
    }
};
