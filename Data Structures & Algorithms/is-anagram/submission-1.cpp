class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        
        vector<int> azcnt(26,0);
        for(int i = 0; i < s.length(); i++)
        {
            azcnt[s[i] - 'a']++;
            azcnt[t[i] - 'a']--;
        }
        
        for(int val: azcnt)
        {
            if(val != 0)
            {
                return false;
            }
        }

        return true;
    }
};
