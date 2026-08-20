class Solution {
  public:
    vector<int> getDivisors(int n) {
        // code here
        vector<int>res;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(i !=n/i){
                    res.push_back(i);
                    res.push_back(n/i);
                }
                else{
                    res.push_back(i);
                }
            }
        }
        sort(res.begin(),res.end());
        return res;
    }
};