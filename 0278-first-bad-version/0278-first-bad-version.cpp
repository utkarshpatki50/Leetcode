// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans;
        int l=1, h=n;
        long mid;
        while(l<h){
            mid= l+(h-l)/2;
            
            if(isBadVersion(mid) ==1){
                 h= mid;
                 
            }
            else{
                l= mid+1;
            }
        }
        return l;
    }
};