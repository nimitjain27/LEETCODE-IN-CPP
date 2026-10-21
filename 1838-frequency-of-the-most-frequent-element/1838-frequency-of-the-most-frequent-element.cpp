class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<long long> pre(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pre[i + 1] = pre[i] + nums[i];
        }

        int best = 1;
        for (int i = 0; i < n; i++) {
            int lo = 0, hi = i;
            while (lo < hi) {
                int mid = (lo + hi) / 2;
                long long cost = (long long)nums[i] * (i - mid + 1) - (pre[i + 1] - pre[mid]);
                if (cost <= k) hi = mid;     
                else lo = mid + 1;             
            }
            best = max(best, i - lo + 1);
        }
        return best;
    }
};