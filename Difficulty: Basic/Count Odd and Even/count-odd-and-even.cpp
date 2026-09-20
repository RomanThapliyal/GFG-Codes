class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        // code here
        int e=0,o=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2==0){e++;}
            else {o++;}
        }
        return {o,e};
    }
};