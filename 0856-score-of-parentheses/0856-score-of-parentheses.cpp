class Solution {
public:
    int scoreOfParentheses(string s) {
        vector<int>v;
        v.push_back(0);
        for (char c : s) {
            if (c == '(') {
                v.push_back(0);
            }
            else {
                int a = v.back();
                v.pop_back();

                if (a == 0)
                    a = 1;
                else
                    a *= 2;

                v.back() += a;
            }
        }

        return v.back();
    }
};