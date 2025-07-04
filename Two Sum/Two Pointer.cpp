#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        vector<pair<int, int>> valIndex;
        for (int i = 0; i < nums.size(); ++i) {
            valIndex.push_back({nums[i], i});
        }

        // Sort by value
        sort(valIndex.begin(), valIndex.end());

        // Two-pointer approach
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int sum = valIndex[left].first + valIndex[right].first;
            if (sum == target) {
                return {valIndex[left].second, valIndex[right].second};
            } else if (sum < target) {
                ++left;
            } else {
                --right;
            }
        }

        return {}; 
    }
};
