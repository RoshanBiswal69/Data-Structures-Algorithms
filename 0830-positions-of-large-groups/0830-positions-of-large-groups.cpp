class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        int n = s.size();
        vector<vector<int>> ans;

        int start = 0;

        for (int i = 1; i <= n; i++) {
            // Group ends when character changes
            // or when we reach the end of the string
            if (i == n || s[i] != s[start]) {
                
                int len = i - start;

                if (len >= 3) {
                    ans.push_back({start, i - 1});
                }

                start = i;
            }
        }

        return ans;
    }
};