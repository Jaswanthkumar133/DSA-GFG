class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int low=0;
        int high=arr.size()-1;
        int ans=-1;
        int mini=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[low]<=arr[mid]){
                if(arr[low]<mini){
                    mini=arr[low];
                    ans=low;
                }
                low=mid+1;
            }else{
                if(arr[mid]<mini){
                    mini=arr[mid];
                    ans=mid;
                }
                high=mid-1;
            }
        }
        return ans;
    }
};
