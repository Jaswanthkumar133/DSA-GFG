class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n=arr.size();
        long long sum=0;
        long long sqsum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            sqsum+=1LL* arr[i]*arr[i];
        }
        
        for(int i=0;i<arr.size();i++){
            sum-=(i+1);
            sqsum-=1LL*(i+1)*(i+1);
        }
        long long res=sqsum/sum;
        long long repeating=(res+sum)/2;
        long long missing=res-repeating;
        return {(int)repeating,(int)missing};
    }
};