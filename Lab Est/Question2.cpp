class Solution {
public:
    int solve(int i, vector<int> &nums, int sm) {
        if (i==nums.size()) return sm==0;
        return solve(i+1, nums, sm-nums[i]) + solve(i+1, nums, sm+nums[i]);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(0, nums, target);
    }
};