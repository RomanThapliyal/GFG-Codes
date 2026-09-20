class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        vector<int>ans;
        
        int max=(a>b)?a:b;
        int min=(a<b)?a:b;
        int candidate=max;
        while(true){
            if(candidate%a==0&&candidate%b==0){
                ans.push_back(candidate);
                break;
            }
            candidate+=max;
        }
        
        for(int i=min;i>0;i--){
            if(a%i==0&&b%i==0){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};