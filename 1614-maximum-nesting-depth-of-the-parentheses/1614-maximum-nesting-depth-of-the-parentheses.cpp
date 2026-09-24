class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxdepth = 0;
        for(int i = 0; i< s.length(); i++){
            if(s[i] == '('){ count+= 1;
            maxdepth = max(count, maxdepth);}
            else if(s[i] == ')') count -= 1;
            else continue;
        }
    return maxdepth;
    }
};