class Solution
{
    public:
        int longestValidParentheses(string A)
        {
            int left = 0, right = 0, ans = 0, n = A.size();

            for (int i = 0; i < n; ++i)
            {
                if (A[i] == '(')
                    ++left;
                else
                    ++right;
                if (left == right)
                    ans = max(ans, 2 *right);
                else if (right > left)
                    left = right = 0;
            }

            left = right = 0;

            for (int i = n - 1; i >= 0; --i)
            {
                if (A[i] == '(')
                    ++left;
                else
                    ++right;
                if (left == right)
                    ans = max(ans, 2 *right);
                else if (left > right)
                    left = right = 0;
            }

            return ans;
        }
};