class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size();
        n=n+1;
        int ans=0;
        for(int i:arr){
            ans^=i;
        }
        for(int i=1;i<=n;i++){
            ans^=i;
        }
        return ans;
    }
};