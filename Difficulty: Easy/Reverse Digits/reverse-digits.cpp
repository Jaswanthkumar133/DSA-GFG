class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int ans=0;
        while(n!=0){
            int ls=n%10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10){
                return 0;
            }
            ans=ans*10+ls;
            n/=10;
        }
        return ans;
    }
};