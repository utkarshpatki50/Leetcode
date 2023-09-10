class Solution
{
    public:
        int lengthOfLongestSubstring(string s)
        {
            int n = s.length();

            unordered_map<char, int> mp;

            int ans = 0, i = 0, j = 0;

            while (i < n && j < n)
            {
               	// Try to extend the range[i,j]
                if (mp.find(s[j]) == mp.end())
                {
                    mp[s[j]] = 1;
                    ans = max(ans, j - i + 1);
                    j++;
                }
                else
                {
                    mp.erase(s[i]);
                    i++;
                }
            }

            return ans;
        }
};