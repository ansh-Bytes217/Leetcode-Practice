class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        if(k > n) k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};

//Beats 100% of cpp solutions
