class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n/2;i++){
            int j=n-1-i;
            swap(arr[i],arr[j]);
        }
    }
};