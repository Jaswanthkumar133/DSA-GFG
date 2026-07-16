class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                return 0;
            }
        }
        if(arr[0]>arr[arr.size()-1]){
            return 0;
        }
        return 1;
    }
};