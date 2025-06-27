class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        auto last = unique(nums.begin(), nums.end());
        nums.erase(last, nums.end());

        int k = nums.size();

        return k;
    }
};
