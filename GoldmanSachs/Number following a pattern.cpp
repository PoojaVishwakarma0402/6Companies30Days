
Problem Link:https://www.geeksforgeeks.org/problems/number-following-a-pattern3126/1

class Solution {
public:
    string printMinNumberForPattern(string S) {
        stack<int> stk;
        int n = S.size() + 1;
        string result;

        for (int i = 0; i < n; ++i) {
            stk.push(i + 1);
            if (i == n - 1 || S[i] == 'I') {
                while (!stk.empty()) {
                    result += to_string(stk.top());
                    stk.pop();
                }
            }
        }

        return result;
    }
};
