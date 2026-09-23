class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        map<int,int>mpp;
        for(int i:arr){
            mpp[i]++;
        }
        int maxi=0;
        int ele=-1;
        for(auto it:mpp){
            if(it.second>=maxi){
                maxi=it.second;
                ele=it.first;
            }
        }
        return ele;
    }
};