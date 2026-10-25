class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        std::vector<int>ans;
        int n = nums.size();
    
        for (int i = 0; i < n*2; i++) {
            int j = i;
            if (j >= n) {
                j = i % n;
            }
            ans.push_back(nums[j]);
        }

        return ans;
    }
};