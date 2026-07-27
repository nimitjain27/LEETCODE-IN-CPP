class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        if (nums.empty()) {
            return 0;
        }
        int m1 = nums[nums.size() - 1];
        int m2 = nums[nums.size() - 2];
        int m3 = nums[nums.size() - 3];

        int n1 = nums[0];
        int n2 = nums[1];
       

        int max1 = m1 * m2 * m3;
        
        int max3 = n1 * n2 * m1;

        int max = 0;
        if (max1 > max3) {
            max = max1;
        } else{
            max = max3;
        }
        
        return max;
    }
};