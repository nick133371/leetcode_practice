class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        std::sort(g.begin(), g.end()); //glog(g)
        std::sort(s.begin(), s.end()); //mlog(m)
        
        int ans = 0;
        int j = 0;
        
        for(int r : g)
        {
            while(j<s.size() && s[j]<r)
            {
                ++j;
            }
            if (j < s.size())
            {
                ++ans;
                ++j;
            }
        }
        return ans;
    }
};
