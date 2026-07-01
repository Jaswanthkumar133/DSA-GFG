class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int x=0;
        for(int i=0;i<arr.size();i++){
            x^=arr[i];
            x^=(i+1);
        }
        x^=(arr.size()+1);
        return x;
    }
};