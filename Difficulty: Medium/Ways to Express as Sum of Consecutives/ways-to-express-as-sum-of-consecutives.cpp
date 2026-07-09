class Solution {
  public:
    int getCount(int n) {
        // code here
        int count=0;
        long long sum=0;
        int left=1;
        for(int i=1;i<n;i++){
            sum+=i;
            
            while(left<i && sum>n){
                sum-=left;
                left++;
            }
            if(sum==n){
                count++;
            }
        }
        return count;
    }
};