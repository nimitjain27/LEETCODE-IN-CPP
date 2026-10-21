class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        long n = nums.size();
        long currSum = 0;
        long l = 0;
        long ops = 0;
        long r,result = 0;
        
        for( r = 0; r < n; r++){
            long target = nums[r];
            currSum += nums[r];
            long windowSum = nums[r] * (r-l+1);
            ops = windowSum - currSum;

        while(ops > k){

            currSum -= nums[l];
            l++;
            ops = (r-l+1)*target - currSum;
        }
        result = max(result,r-l+1);
        }
        
        return result;
    }
};