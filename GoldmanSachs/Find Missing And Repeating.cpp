class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr, int n) {
        vector<int> result;

        long long expectedSum = (n * 1LL * (n + 1)) / 2;
        long long expectedSquareSum = (n * 1LL * (n + 1) * (2 * n + 1)) / 6;

        long long actualSum = 0, actualSquareSum = 0;

        for (int i = 0; i < arr.size(); ++i) {
            actualSum += arr[i];
            actualSquareSum += 1LL * arr[i] * arr[i];
        }

        long long eq1 = expectedSum - actualSum;  // x - y
        long long eq2 = (expectedSquareSum - actualSquareSum) / eq1;  // x + y

        int x = (eq1 + eq2) / 2;
        int y = x - eq1;

        result.push_back(y);
        result.push_back(x);

        return result;
    }
};
