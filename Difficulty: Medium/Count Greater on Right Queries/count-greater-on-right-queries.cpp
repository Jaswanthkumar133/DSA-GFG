class Solution {
  public:
    vector<int> countGreater(vector<int> &arr, vector<int> &indices) {
        // code here
        vector<int>ans;
        for(int i=0;i<indices.size();i++){
            int key=arr[indices[i]];
            int count=0;
            for(int j=indices[i];j<arr.size();j++){
                if(arr[j]>key){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};