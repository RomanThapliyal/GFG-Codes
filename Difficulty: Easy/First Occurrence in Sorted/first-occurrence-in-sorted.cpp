class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        int startpos=-1;
        int mid;
        int start=0;
        int end=arr.size()-1;
        
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]==k){
                startpos=mid;
                end=mid-1;
            }
            else if(arr[mid]>k){end=mid-1;}
            else {start=mid+1;}
        }
        
        return startpos;
    }
};