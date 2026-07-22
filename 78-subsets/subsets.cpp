class Solution {
public:
    void allsubsets(vector<int>& nums, vector<int>& ans, int i,
                    vector<vector<int>>& getallsubsets) {
        if (i == nums.size()) {
            getallsubsets.push_back(ans);
            return;
        }

        // Include current element
        ans.push_back(nums[i]);
        allsubsets(nums, ans, i + 1, getallsubsets);

        // Exclude current element
        ans.pop_back();
        allsubsets(nums, ans, i + 1, getallsubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> getallsubsets;
        vector<int> ans;

        allsubsets(nums, ans, 0, getallsubsets);

        return getallsubsets;
    }
};