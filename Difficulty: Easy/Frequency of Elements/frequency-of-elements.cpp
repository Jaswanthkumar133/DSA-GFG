class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        map<int,int> mpp;

        // Count frequency
        for(int i = 0; i < arr.size(); i++){
            mpp[arr[i]]++;
        }

        vector<vector<int>> ans;

        // Iterate over map properly
        for(auto it : mpp){
            ans.push_back({it.first, it.second});
        }

        return ans;
    }
};