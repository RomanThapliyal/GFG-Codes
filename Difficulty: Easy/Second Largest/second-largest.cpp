class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max1=INT_MIN;
        int max2=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(max1<arr[i]){
                max2=max1;
                max1=arr[i];
            }
            else if(max2<arr[i]&&max1!=arr[i]){
                max2=arr[i];
            }
        }
        if(max2==INT_MIN||max2==max1){ return -1;}
        return max2;
    }
};