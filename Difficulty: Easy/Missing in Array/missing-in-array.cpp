class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int x=0;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            x^=arr[i];
            x^=(i+1);
        }
        x^=(n+1);
        return x;
    }
};