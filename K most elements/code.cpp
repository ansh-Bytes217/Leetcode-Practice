class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        long long operationUsed = 0;
        int left = 0, maxFreq = 0;

        for (int right = 0; right < nums.size(); right++) {
            // Expand the window by adding cost to equalize nums[left..right]
            if (right > 0) {
                operationUsed += (long long)(nums[right] - nums[right - 1]) * (right - left);
            }

            // Shrink window from the left if cost exceeds k
            while (operationUsed > k) {
                operationUsed -= nums[right] - nums[left];
                left++;
            }

            // Update maximum frequency found
            maxFreq = max(maxFreq, right - left + 1);
        }

        return maxFreq;
    }
};
