class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int maxi=INT_MIN;
        for(auto &it:arr){
            if(it>maxi){
                maxi=it;
            }
        }
        return maxi;
    }
};
