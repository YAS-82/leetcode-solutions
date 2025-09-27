class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int counter{0}; counter < nums.size(); counter++) {
            for (int counter_2{counter + 1}; counter_2 < nums.size(); counter_2++) {
                if (nums[counter] + nums[counter_2] == target) {
                    return {counter, counter_2};
                }
            }
        }
        return vector<int>();
    }
};