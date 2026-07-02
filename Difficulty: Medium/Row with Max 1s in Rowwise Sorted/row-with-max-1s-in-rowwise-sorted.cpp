class Solution {
  public:
    int lowerbound (vector<int>&arr,int low,int high){
        int ans=-1;
        int m=arr.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]>=1){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        if(ans==-1){
            return m;
        }
        return ans;
    }
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n=arr.size();
        int m=arr[0].size();
        int ind=-1;
        int currMax=0;
        for(int i=0;i<n;i++){
            int count =m-lowerbound(arr[i],0,m-1);
            if(count>currMax){
                currMax=count;
                ind=i;
            }
        }
        return ind;
    }
};