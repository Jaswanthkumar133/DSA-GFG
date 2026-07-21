class Solution {
  public:
    int helper(vector<int>&arr,int mid){
        long long ans=0;
        int count=1;
        for(int i:arr){
            if(ans+i>mid){
                ans=i;
                count++;
            }else{
                ans+=i;
            }
        }
        return count;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        long long low=*max_element(arr.begin(),arr.end());
        long long high=accumulate(arr.begin(),arr.end(),0LL);
        int ans=high;
        while(low<=high){
            long long mid=low+(high-low)/2;
            int temp=helper(arr,mid);
            if(temp<=k){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};