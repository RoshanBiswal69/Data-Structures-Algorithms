class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0;
        for(int i = 0;i<n;){
            char currentchar = chars[i];
                    int cnt = 0;

                    while(i<n && chars[i] == currentchar){
                        i++;
                        cnt++;

                    }
                    chars[index++] = currentchar;

                    if(cnt > 1){
                                string count = to_string(cnt);
                                for(char c : count){
                                    chars[index++] = c;
                                }
                    }
        }
        return index;
    }
};