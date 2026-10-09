class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //unordered_map<int, int> res;  // value --> occurance count
        std::vector<std::pair<int, int>> res(2001);
        for(int i = 0; i < 2001; i++) {
            res[i] = {0, i - 1000};
        }
        std::vector<int> result(k,0);
        for(int i = 0; i < nums.size(); i++)
        {
            res[1000 + nums[i]].first++;
        }

        std::sort(res.begin(),res.end(),std::greater<std::pair<int, int>>());

        for(int i = 0; i < k; i++)
        {
            result[i] = res[i].second;
        }

        return result;
    }
};
