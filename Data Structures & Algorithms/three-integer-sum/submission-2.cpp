class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int sz = nums.size();
        vector<vector<int>> res;
        // sort the array to handle duplicates and enable 2 pointer logic
        sort(nums.begin(), nums.end());
        for (int i = 0; i < sz; i++) {
            if (nums[i] > 0) {
                break;  // because all the remaining numbers are positive
            }
            // skip the duplicates
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            // initialize left and right pointers
            int l = i + 1, r = sz - 1;

            while (l < r) {
                int threeSum = nums[i] + nums[l] + nums[r];
                if (threeSum > 0) {
                    r--;
                } else if (threeSum < 0) {
                    l++;
                } else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    r--;
                    l++;
                    // skip duplicates at the left pointer
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                }
            }
        }

        return res;
    }
};
