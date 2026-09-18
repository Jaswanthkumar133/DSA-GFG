class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        int maxi=0;
        int ans=-1;
        for(auto i:mpp){
            if(i.second>=maxi){
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};