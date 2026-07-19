class Solution {
  public: 
    void merge(vector<int>&arr,int low,int mid,int high,int&count){
        int left=low;
        int right=mid+1;
        vector<int>temp;
        while(left<=mid && right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }else{
                count+=mid-left+1;
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];
        }
    }
    void mergeSort(vector<int>&arr,int low,int high,int &count){
        if(low>=high){
            return;
        }
        int mid=low+(high-low)/2;
        mergeSort(arr,low,mid,count);
        mergeSort(arr,mid+1,high,count);
        merge(arr,low,mid,high,count);
    }
    int inversionCount(vector<int> &arr) {
        // code here
        int count=0;
        int low=0;
        int high=arr.size()-1;
        mergeSort(arr,low,high,count);
        return count;
    }
};