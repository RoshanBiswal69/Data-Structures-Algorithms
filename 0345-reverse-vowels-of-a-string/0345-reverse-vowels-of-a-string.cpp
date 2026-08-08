class Solution {
public:
    string reverseVowels(string s) {
        string word = s;
        int left = 0;
        int right = s.size()-1;
        string vowels = "aeiouAEIOU";

        while(left<right){
            while(left < right && vowels.find(word[left]) == string::npos){
                left++;
            }
            while(left<right && vowels.find(word[right]) == string::npos){
                right--;
            }
            swap(word[left],word[right]);
            left++;
            right--;
        }
        return word;
    }
};