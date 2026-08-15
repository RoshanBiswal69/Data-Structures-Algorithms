class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.size();
        unordered_set<char> charset;
        int length = 0;
        for(char ch:s){
           if(charset.find(ch) != charset.end()){
            charset.erase(ch);
            length+=2;
           }else{
            charset.insert(ch);
           }
        }
        if(!charset.empty()){
            length+=1;

        }
        return length;
    }
};