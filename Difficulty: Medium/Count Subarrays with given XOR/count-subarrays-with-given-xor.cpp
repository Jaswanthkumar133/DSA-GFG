class Solution {
	public:
	long subarrayXor(vector<int> &arr, int k) {
		// code here
		long long x = 0;
		unordered_map<int,int>mpp;
		long count=0;
		mpp[0]=1;
		for(int i:arr){
		    x^=i;
		    long long rem=x^k;
		    if(mpp.find(rem)!=mpp.end()){
		        count+=mpp[rem];
		    }
		    mpp[x]++;
		}
		return count;
	}
};
