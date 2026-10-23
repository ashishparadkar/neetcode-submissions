class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> track;
        int l = 0, res = 0, r = 0;
        for (r = 0; r < s.size(); r++) {
            if (track.find(s[r]) != track.end()) {
                l = max(track[s[r]] + 1, l);
            }
            track[s[r]] = r;
            res = max(res, r - l + 1);
        }
        return res;
    }
};
