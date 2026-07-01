class Solution {
	public:
	int maxLength(vector<int>& arr) {
		// code here
		unordered_map<int, int>mpp;
		int longest = 0;
		long long sum = 0;
		for (int i = 0; i<arr.size(); i++) {
			sum += arr[i];
			if (sum == 0) {
				longest = i + 1;
			}
			
			if (mpp.find(sum) != mpp.end()) {
				longest = max(longest, i - mpp[sum]);
			}
			if (mpp.find(sum) == mpp.end()) {
				mpp[sum] = i;
			}
		}
		return longest;
	}
};
