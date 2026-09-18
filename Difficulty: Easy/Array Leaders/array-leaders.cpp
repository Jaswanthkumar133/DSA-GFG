class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        vector<int>temp;
        for(int i=arr.size()-1;i>=0;i--){
            if(temp.size()==0 || temp.back()<=arr[i]){
                temp.push_back(arr[i]);
            }
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};