class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int temp=0;
        for(int i=1;i<=arr.size()+1;i++){temp^=i;}
        for(int x:arr){temp^=x;}
        return temp;
    }
};