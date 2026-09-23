class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        // code here
        pair<int,int>pq;
        for(int i:arr){
            if(i%2==0){
                pq.second++;
            }else{
                pq.first++;
            }
        }
        return pq;
    }
};