class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int totsum=0;
        int sum=0;
        int n= nums.size();
        
        totsum= n*(n+1)/2;
        
        for(int i=0; i<n; i++){
             sum+=nums[i];
        }
        
        return totsum-sum;
    }
};