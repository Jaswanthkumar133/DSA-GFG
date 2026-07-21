class Solution {
	public:
	int firstOccurance(vector<int>arr, int target) {
		int ans = -1;
		int low = 0;
		int high = arr.size() - 1;
		while (low <= high) {
			int mid = low + (high - low)/2;
			if (arr[mid] == target) {
				ans = mid;
				high = mid - 1;
			} else if (arr[mid]<target) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
		return ans;
	}
	int secondOccurance(vector<int>&arr, int target) {
		int low = 0;
		int high = arr.size() - 1;
		int ans = -1;
		while (low <= high) {
			int mid = low + (high - low)/2;
			if (arr[mid] == target) {
				ans = mid;
				low = mid + 1;
			} else if (arr[mid]<target) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
		return ans;
	}
	int countFreq(vector<int>& nums, int target) {
		// code here
		int first = firstOccurance(nums, target);
		if (first == -1) {
			return 0;
		}
		int second = secondOccurance(nums, target);
		return second-first+1;
	}
};
