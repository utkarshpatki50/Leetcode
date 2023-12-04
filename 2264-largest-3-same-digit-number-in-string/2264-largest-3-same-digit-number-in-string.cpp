class Solution
{
    public:
        string largestGoodInteger(string num)
        {
            int n = num.size();
            string ans = "";
            vector<string>s;
            for (int i = 0; i <= n - 3; i++)
            {
                string sub = num.substr(i, 3);
                if (sub[0] == sub[1] && sub[1] == sub[2])
                {
                    s.push_back(sub);
                }
            }
            sort(s.rbegin(),s.rend());
           if(s.size()==0)
               return "";
            else
                return s[0];
        }
};