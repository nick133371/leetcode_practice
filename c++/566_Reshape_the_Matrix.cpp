class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        
        if(nums.size() == 0) return nums;
        int m = nums.size();
        int n = nums[0].size();
        if(m*n!=r*c) return nums;
        
        // new matrix
        vector<vector<int>> ans (r,vector<int>(c));
        
        for (int i = 0; i<m*n;++i)
        {
            int org_y = i/n;
            int org_x = i%n;
            int new_y = i/c;
            int new_x = i%c;
            ans[new_y][new_x] = nums[org_y][org_x];
        }
        
        return ans;
    }
};
