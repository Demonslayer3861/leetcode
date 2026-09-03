class Solution {
    #include <cmath>
public:
    int climbStairs(int n) {
        long long ans=0;
        for(int i=0 ; i<=n/2 ; i++){
            long long coeff=1;
            for(int j=1 ; j<=i ; j++){
                coeff=coeff*(n-2*i+j)/j;
            }
            ans+=coeff;
        }
        return ans;
    }
};