class Solution {
private:
    void bt(int idx, string digits, string s, vector<string>& result,
            vector<string>& combos) {

        if(idx == digits.size()) {
            result.push_back(s);
            return;
        }

        string letters = combos[digits[idx] - '0'];

        for(int i = 0; i < letters.size(); i++) {
            bt(idx + 1, digits, s + letters[i], result, combos);
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> combos = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> result;

        if(digits.empty())
            return result;

        bt(0, digits, "", result, combos);

        return result;
    }
};