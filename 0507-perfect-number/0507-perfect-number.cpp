class Solution
{
    public:
        bool checkPerfectNumber(int num)
        {
            int count = 0;
            for (int i = 1; i < num; i++)
            {
                if (num % i == 0)
                    count += i;
            }
            if (num == count)
                return true;
            else
                return false;
        }
};