class Solution {
  public:
    int findMean(vector<int>& arr) {
        // code here
        int s=0;
        for(int x:arr){s+=x;}
        return s/(arr.size());
    }
};