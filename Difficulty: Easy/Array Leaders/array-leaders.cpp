class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int maxi=INT_MIN;
        vector<int>temp;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>=maxi){
                maxi=arr[i];
                temp.push_back(maxi);
            }
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};