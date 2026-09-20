class Solution {
  public:
    int arraySum(vector<int>& arr) {
        // code here
        int s=0;
        for(int i=0;i<arr.size();i++){
            s+=arr[i];
        }
        return s;
    }
};