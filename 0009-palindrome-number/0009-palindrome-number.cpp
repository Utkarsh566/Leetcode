class Solution {
public:

    bool check(string &s, int i) {

        if(i >= s.length() / 2) {
            return true;
        }

        if(s[i] != s[s.length() - i - 1]) {
            return false;
        }

        return check(s, i + 1);
    }

    bool isPalindrome(int x) {

        string s = to_string(x);

        return check(s, 0);
    }
};