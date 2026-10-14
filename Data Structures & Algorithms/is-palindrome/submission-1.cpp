class Solution {
   public:
    bool isPalindrome(string s) {
        int b = 0, e = s.length() - 1;

        while (b < e) {
            while (b < e && !isalnum(s[b])) b++;
            while (b < e && !isalnum(s[e])) e--;

            if (b < e && tolower(s[b]) != tolower(s[e])) return false;
            b++;
            e--;
        }
        return true;
    }
};
