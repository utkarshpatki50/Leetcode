class Solution
{
    public:

        int minFallingPathSum(vector<vector < int>> &matrix)
        {

            int n = matrix.size();
            int m = matrix[0].size();
            int dp[n][m];
            int mini = INT_MAX;

            for (int j = 0; j < m; j++)
                dp[0][j] = matrix[0][j];

            for (int i = 1; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    int left = matrix[i][j];
                    if (j > 0)
                        left += dp[i - 1][j - 1];
                    else left += 10000;
                    int up = matrix[i][j] + dp[i - 1][j];
                    int right = matrix[i][j];
                    if (j + 1 < m)
                        right += dp[i - 1][j + 1];
                    else
                        right += 10000;

                    dp[i][j] = min(left, min(up, right));
                }
            }
            for (int j = 0; j < m; j++)
            {
                mini = min(mini, dp[n - 1][j]);
            }

            return mini;
        }
};