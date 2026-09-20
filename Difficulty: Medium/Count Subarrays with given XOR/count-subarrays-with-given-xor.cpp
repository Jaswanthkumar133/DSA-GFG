class Solution {
	public:
	long subarrayXor(vector<int> &arr, int k) {
		// code here
		unordered_map<int, int>mpp;
		int Xor = 0;
		mpp[0] = 1;
		int count = 0;
		for (int i = 0; i<arr.size(); i++) {
			Xor ^= arr[i];
			int rem = Xor^k;
			if (mpp.find(rem) != mpp.end()) {
				count += mpp[rem];
			}
			
			mpp[Xor]++;
		}
		return count;
	}
};
