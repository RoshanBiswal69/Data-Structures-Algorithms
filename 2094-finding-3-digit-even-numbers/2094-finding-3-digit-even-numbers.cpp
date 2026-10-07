class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        unordered_map<int, int> mp;
        vector<int> s;

        for (int i = 0; i < n; i++)
            mp[digits[i]]++;

        for (int i = 0; i < 9; i += 2) {
            if (mp[i] == 0)
                continue;

            mp[i]--;

            for (int j = 1; j < 10; j++) {
                if (mp[j] == 0)
                    continue;

                mp[j]--;

                for (int k = 0; k <= 9; k++) {
                    if (mp[k] > 0) {
                        int t = j * 100 + k * 10 + i;
                        s.push_back(t);
                    }
                }

                mp[j]++;
            }

            mp[i]++;
        }

        sort(s.begin(), s.end());

        return s;
    }
};