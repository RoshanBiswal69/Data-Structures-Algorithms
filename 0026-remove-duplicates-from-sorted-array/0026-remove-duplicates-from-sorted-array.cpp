class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        int index = 0;

        for (int x : nums) {
            if (s.find(x) == s.end()) {
                s.insert(x);
                nums[index] = x;
                index++;
            }
        }

        return index;
    }
};