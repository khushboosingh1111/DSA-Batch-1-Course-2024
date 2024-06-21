class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int count = 0;

        if (nums.size() <= 1)
            return 0;

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i - 1] >= nums[i]) {
                count += nums[i - 1] - nums[i] + 1;
                nums[i] = nums[i - 1] + 1;
            }
        }
        return count;
    }
};