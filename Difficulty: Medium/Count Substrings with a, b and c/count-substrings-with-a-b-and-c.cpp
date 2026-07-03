class Solution {
  public:
    int countSubstring(string &s) {
        // Code here
        int count=0;
        int n=s.size();
        int i=0;
        int left=0;
        unordered_map<char,int>mpp;
        while(i<n){
            mpp[s[i]]++;
            while(mpp.size()==3){
                count+=n-i;
                mpp[s[left]]--;
                if(mpp[s[left]]==0){
                    mpp.erase(s[left]);
                }
                left++;
            }
            i++;
        }
        return count;
    }
};