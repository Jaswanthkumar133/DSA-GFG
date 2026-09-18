class Solution {
  public:
    void bubble(vector<int>&arr,int i,int n){
        if(i==n){
            return;
        }
        for(int j=0;j<arr.size()-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        bubble(arr,i+1,n);
    }
    void bubbleSort(vector<int>& arr) {
        // code here
        bubble(arr,0,arr.size()-1);
    }
};