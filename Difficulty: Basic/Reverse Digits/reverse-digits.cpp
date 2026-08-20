class Solution {
  public:
    int reverseDigits(int n) {
        // Code here
        int ans=0;
        while(n){
            int ls=n%10;
            ans=ans*10+ls;
            n/=10;
        }
        return ans;
    }
};