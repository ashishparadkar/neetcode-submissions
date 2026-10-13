class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        vector<int> prefix(n);
        vector<int> suffix(n);
 
        int i;
//build prefix array
        prefix[0] = 1;
        for(i = 1; i < n; i++)
        {
            prefix[i] = prefix[i-1] * nums[i-1]; 
        }
//build suffix array
        suffix[n-1] = 1;
        for(i = n-2; i >= 0; i-- )
        {
            suffix[i] = suffix[i+1] * nums[i+1];
        }
//build final output array
        for(i = 0; i < n; i++)
        {
            output[i] = prefix[i] * suffix[i];
        }
        return output;
    }
};
