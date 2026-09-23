class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int count=0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
                count++;
            }
        }
        if(arr[arr.size()-1]>arr[0]){
            count++;
        }
        return count<=1;
    }
};