class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans = 0;
        // do or to get the result of x and y
        int t = x ^ y;
        while(t>0)
        {
            ans += t & 1;
            // >>=1 == /=2
            t>>=1;
        }
        return ans;
    }
};
