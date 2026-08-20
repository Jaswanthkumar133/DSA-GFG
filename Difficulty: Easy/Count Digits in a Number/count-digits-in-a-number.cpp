class Solution {
  public:
    int countDigits(int n) {
        // Code here
        int count=0;
        while(n){
            count++;
            n=n/10;
        }
        return count;
    }
};