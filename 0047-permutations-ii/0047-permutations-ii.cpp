class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
		
        vector<vector<int>> output;
        output.push_back(nums);
        while (next_permutation(begin(nums), end(nums))) {
            output.push_back(nums);
        }
        return output;
    }
};