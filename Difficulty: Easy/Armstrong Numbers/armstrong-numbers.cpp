class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int ans=n;
        long long temp=0;
        while(ans>0){
            int ls=ans%10;
            temp+=pow(ls,3);
            ans/=10;
        }
        if(temp==n){
            return true;
        }
        return false;
    }
};