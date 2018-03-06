class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        // use d to subtitude dungeon
        const vector<vector<int>>& d = dungeon;
        const int m = d.size();
        const int n = d[0].size();
        // This matrix is for DP, and should be bigger than original vector for 1 row and 1 column
        vector<vector<int>> hp(m+1, vector<int>(n+1,INT_MAX));
        // The mininum hp after P
        hp[m][n-1] = hp[m-1][n] = 1;
        for(int y=m-1;y>=0;--y)
            for(int x = n-1;x>=0;--x)
                hp[y][x] =max(1, min(hp[y+1][x],hp[y][x+1]) - d[y][x]);
        
        return hp[0][0];
    }
};
