class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res = 0;
        unordered_map<char , int> charfreq;
        for(char c : chars){
            charfreq[c]++;
        }
       for(auto word : words){
        unordered_map<char, int> wordfreq;
        bool valid = true;

        for(char c: word){
            wordfreq[c]++;
            if(wordfreq[c] > charfreq[c]){
                valid = false;
                break;
            }
        }
        if(valid){
            res+=word.size();
        }
       }
       return res;
    }
};