class Solution
{
    public:
        int fun(int n, vector<int> &dp)
        {
            if (n <= 1)
                return 1;
            if (dp[n] != -1)
                return dp[n];

            int l = fun(n - 1, dp);
            int r = fun(n - 2, dp);

            return dp[n] = l + r;
        }

    int climbStairs(int n)
    {
        vector<int> dp(n + 1, -1);
        int ans = fun(n, dp);
        return ans;
    }
};