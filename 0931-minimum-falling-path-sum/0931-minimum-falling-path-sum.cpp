class Solution
{
    public:

        int minFallingPathSum(vector<vector < int>> &matrix)
        {

            int n = matrix.size();
            int m = matrix[0].size();
            vector<int> prev(m,0), cur(m,0);
            int mini = INT_MAX;

            for (int j = 0; j < m; j++)
                prev[j] = matrix[0][j];

            for (int i = 1; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    int left = matrix[i][j];
                    if (j > 0)
                        left += prev[j - 1];
                    else left += 10000;
                    int up = matrix[i][j] + prev[j];
                    int right = matrix[i][j];
                    if (j + 1 < m)
                        right += prev[j + 1];
                    else
                        right += 10000;

                    cur[j] = min(left, min(up, right));
                }
                prev= cur;
            }
            for (int j = 0; j < m; j++)
            {
                mini = min(mini, prev[j]);
            }

            return mini;
        }
};