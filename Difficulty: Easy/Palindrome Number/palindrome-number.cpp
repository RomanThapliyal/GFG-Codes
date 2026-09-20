class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        if(n<0){n=-n;}
        if (n%10==0&&n!=0) return false;
        int r=0;
        while(n>r){
            r=r*10+n%10;
            n/=10;
        }
        if(n==r||n==r/10){return true;}
        return false;
    }
};