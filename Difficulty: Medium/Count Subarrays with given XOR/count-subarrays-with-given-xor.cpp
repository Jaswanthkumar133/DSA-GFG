class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        long long  x=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        long count=0;
        for(int i=0;i<arr.size();i++){
            x^=arr[i];
            long long rem=x^k;
            if(mpp.find(rem)!=mpp.end()){
                count+=mpp[rem];
            }
            mpp[x]++;
        }
        return count;
    }
};