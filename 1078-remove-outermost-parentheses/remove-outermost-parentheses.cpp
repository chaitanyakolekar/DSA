class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int i = 0;
        int count = 0;

        for (int j = 0; j < s.length(); j++) {

            if (s[j] == '(')
                count++;
            else
                count--;

            if (count == 0) {
                // remove first and last parentheses
                for (int k = i + 1; k < j; k++)
                    ans += s[k];

                i = j + 1;
            }
        }

        return ans;
    }
};