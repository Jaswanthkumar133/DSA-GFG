class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {

        int n = arr.size();

        long long sum = 1LL * n * (n + 1) / 2;
        long long sqSum = 1LL * n * (n + 1) * (2LL * n + 1) / 6;

        for (int i = 0; i < n; i++) {
            sum -= arr[i];
            sqSum -= 1LL * arr[i] * arr[i];
        }

        long long del = sqSum / sum;

        long long missing = (sum + del) / 2;
        long long repeating = del - missing;

        return {(int)repeating, (int)missing};
    }
};