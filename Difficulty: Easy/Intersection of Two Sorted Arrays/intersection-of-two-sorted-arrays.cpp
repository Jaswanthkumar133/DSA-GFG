class Solution {
  public:
    vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int i=0;
        int j=0;
        int n=arr1.size();
        int m=arr2.size();
        vector<int>temp;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                i++;
            }else if(arr2[j]<arr1[i]){
                j++;
            }else{
                if(temp.size()==0 || temp.back()!=arr1[i]){
                    temp.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }
        return temp;
    }
};