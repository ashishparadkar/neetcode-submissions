class Solution {
   public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> chk;
        int sz = numbers.size();

        for (int i = 0; i < sz; i++) {
            int tmp = target - numbers[i];
            if (chk.count(tmp)) {
                return {chk[tmp], i + 1};
            }
            chk[numbers[i]] = i + 1;
        }

        return {};
    }
};
