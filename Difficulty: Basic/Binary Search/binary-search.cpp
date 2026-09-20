class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int mid,start=0,end=arr.size()-1;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]==k){return true;}
            else if(arr[mid]<k){start=mid+1;}
            else {end=mid-1;}
        }
        return false;
    }
};