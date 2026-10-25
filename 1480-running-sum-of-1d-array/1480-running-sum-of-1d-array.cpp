class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> res(n, 0);
        for (int i = 0; i < n; i++) {
            if (i == 0)
                res[i] = nums[i];
            else
                res[i] = res[i - 1] + nums[i];
        }

        return res;
    }
};