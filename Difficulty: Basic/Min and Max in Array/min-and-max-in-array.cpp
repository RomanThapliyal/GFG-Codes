class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int max=INT_MIN;
        int min=INT_MAX;
        for(int x:arr){
            if(max<x)max=x;
            if(min>x)min=x;
        }
        return {min,max};
    }
};