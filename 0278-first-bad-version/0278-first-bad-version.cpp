// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left = 1;
        long long right = n;
        long long ans=0;

        long long mid=(left+right-1)/2;

        while(left <= right){

               if(isBadVersion(mid)){
                    ans=mid;
                    if(isBadVersion(mid-1)){
                        mid =mid-1;
                    }
                    else{
                        return ans;
                    }
                   
               }
               else {
                    mid=mid+1;
               }

        }

        return ans;
    }
};