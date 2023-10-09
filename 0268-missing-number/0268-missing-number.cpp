class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int totsum= n*(n+1)/2;
        
        int cursum=0;
        for(auto it: nums){
            cursum+= it;
        }
        return totsum- cursum;
    }
};