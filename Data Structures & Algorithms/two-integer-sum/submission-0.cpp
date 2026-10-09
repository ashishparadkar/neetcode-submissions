class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int i, j;
       vector<int> ret = {-1,-1};

       for(i = 0; i < nums.size(); i++)
       {
        for(j = i + 1; j < nums.size(); j++)
        {
            if(target - nums[j] == nums[i])
            {
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
       }
       return ret; 
    }
};
