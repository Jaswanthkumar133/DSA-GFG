class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest=-1;
        int secondLargest=-1;
        for(int i:arr){
            if(i>largest){
                secondLargest=largest;
                largest=i;
            }
            if(i>secondLargest && i!=largest){
                secondLargest=i;
            }
        }
        return secondLargest;
    }
};