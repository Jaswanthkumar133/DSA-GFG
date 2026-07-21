class Solution {
  public:
    int helper(vector<int>&arr,long long mid){
        long long ans=0;
        int count=1;
        for(int i:arr){
            if(ans+i>mid){
                count++;
                ans=i;
            }else{
                ans+=i;
            }
        }
        return count;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        if(arr.size()<k){
            return -1;
        }
        long long low=*max_element(arr.begin(),arr.end());
        long long high=accumulate(arr.begin(),arr.end(),0LL);
        int ans=-1;
        while(low<=high){
            long long mid=low+(high-low)/2;
            int dell=helper(arr,mid);
            if(dell<=k){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};