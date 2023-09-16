class Solution
{
    public:

        int rob(vector<int> &nums)
        {
            int n = nums.size();
            int prev = nums[0];
            int prev2 = 0;
            int curri = 0;
            for (int i = 1; i < n; i++)
            {
                int pick = nums[i];
                if (i > 1)
                    pick = pick + prev2;
                int notPick = 0 + prev;
                curri = max(pick, notPick);
                prev2 = prev;
                prev = curri;
            }
            return prev;
        }
};

//Type 2 Code studio
//extra condition : First and Last houses are adjacent to each other because houses are in circular manner

// Solution: Same approach above , take two vectors v1 and v2... in v1 exclude last element of array and in v2 exclude first element of array
// ans will be max(f(v1),f(v2));

// #include <bits/stdc++.h>
// long long rob(vector<int> &nums) {
//   int n = nums.size();
//   long long int prev = nums[0];
//   long long int prev2 = 0;

//   for (int i = 1; i < n; i++) {
//     long long int pick = nums[i];
//     if (i > 1)
//       pick += prev2; long long int notPick = 0 + prev;

//     long long int curi = max(pick, notPick);
//     prev2 = prev;
//     prev = curi;
//   }
//   return prev;
// }

// long long int houseRobber(vector<int>& valueInHouse)
// {
//     int n= valueInHouse.size();
//     vector<int> v1,v2;
//     if(n==1)
//         return valueInHouse[0];
//     for(int i=0; i<n; i++){
//         if(i!=0){
//             v1.push_back(valueInHouse[i]);
//         }

//         if(i!= n-1){
//             v2.push_back(valueInHouse[i]);
//         }
//     }
//     return max(rob(v1), rob(v2));
// } 
