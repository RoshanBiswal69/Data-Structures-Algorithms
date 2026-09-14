class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int ret = n;
        for(int i = n-1;i>=0;i--){
            if((num[i]-'0')%2==0){
                ret--;
            }else{
                break;
            }
        }
        string res ="";
        for(int i=0;i<ret;i++){
            res += num[i];
        }
return res;
    }
};