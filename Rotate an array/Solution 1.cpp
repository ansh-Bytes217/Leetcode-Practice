class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;

        k = k % n;  

        // Create a temporary array
        vector<int> temp(k);

        // Step 1: Copy last k elements to temp
        for (int i = 0; i < k; ++i) {
            temp[i] = nums[n - k + i];
        }

        // Step 2: Shift the remaining elements to the right
        for (int i = n - k - 1; i >= 0; --i) {
            nums[i + k] = nums[i];
        }

        // Step 3: Copy back the k elements to the front
        for (int i = 0; i < k; ++i) {
            nums[i] = temp[i];
        }
    }
};
