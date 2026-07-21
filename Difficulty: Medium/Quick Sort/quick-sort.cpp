class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        // code here
        if(low<=high){
            int part=partition(arr,low,high);
            quickSort(arr,low,part-1);
            quickSort(arr,part+1,high);
        }
    }

    int partition(vector<int>& arr, int low, int high) {
        // code here
        int key=arr[high];
        int j=low;
        for(int i=low;i<high;i++){
            if(arr[i]<key){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        swap(arr[j],arr[high]);
        return j;
        
    }
};