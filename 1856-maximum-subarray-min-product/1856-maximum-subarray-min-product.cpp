class Solution {
public:
    int maxSumMinProduct(vector<int>& nums) {
        int n = nums.size();
        vector<long long> prefix(n + 1, 0);
        stack<int> st;
        long long ans = 0;

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + nums[i];
        }

        for (int i = 0; i <= n; i++) {
            while (!st.empty() &&
                   (i == n || nums[st.top()] > nums[i])) {
                int index = st.top();
                st.pop();

                int left = st.empty() ? 0 : st.top() + 1;
                int right = i - 1;

                long long sum = prefix[right + 1] - prefix[left];
                long long product = sum * nums[index];

                ans = max(ans, product);
            }

            if (i < n) {
                st.push(i);
            }
        }

        return ans % 1000000007;
    }
};