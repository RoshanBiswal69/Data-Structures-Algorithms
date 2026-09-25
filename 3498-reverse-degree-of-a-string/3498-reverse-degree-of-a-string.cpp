class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i = 0;i<s.size();i++){
            char ch = s[i];
            int reverseValue = 26 - (ch-'a');
            int position = i+1;
            sum+=reverseValue * position; 
        }
return sum;
    }
};