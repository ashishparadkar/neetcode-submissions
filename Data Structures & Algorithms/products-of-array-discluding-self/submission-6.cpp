class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n,1);
        int prod = 1;
        int i = 1;

//build prefix array in to output array
        for(i = 1; i < n; i++)
        {
            output[i] = output[i-1] * nums[i-1]; 
        }
//build suffix array and final output array
        for(i = n-1; i >= 0; i--)
        {
            output[i] *= prod;
            prod *= nums[i];
        }

        return output;
    }
};
