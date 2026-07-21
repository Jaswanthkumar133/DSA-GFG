class Solution {
  public:
    int helper(vector<int>&arr,int k,int mid){
        int lastPlaced=arr[0];
        int count=1;
        for(int i=1;i<arr.size();i++){
            if((arr[i]-lastPlaced)>=mid){
                count++;
                lastPlaced=arr[i];
            }
        }
        return count;
    }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int low=1;
        int high=arr[arr.size()-1]-arr[0];
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int del=helper(arr,k,mid);
            if(del<k){
                high=mid-1;
            }else{
                ans=mid;
                low=mid+1;
            }
        }
        return ans;
    }
};