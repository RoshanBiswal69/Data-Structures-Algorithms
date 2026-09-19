class Solution {
public:
int mod = 1e9 + 7;
long long check(string &s, string &temp){
    int n = s.size();
    int m = temp.size();
    long long dp[m+1][n+1];
    memset(dp, 0,sizeof(dp));
    for(int j=0;j<=n;j++) dp[m][j] = 1;
    for(int i = m-1;i>=0;i--){
        for(int j=n-1;j>=0;j--){
            if(temp[i] == s[j]){
                dp[i][j] = (dp[i+1][j+1] + dp[i][j+1]) % mod;
            }else{
                dp[i][j] = dp[i][j+1];
            }
        }
    }
    return dp[0][0];
}
    int countPalindromes(string s) {
        long long ans = 0;
        for(int i =0 ;i<=9;i++){
            for(int j = 0;j<=9;j++){
                for(int k = 0;k<=9;k++){
                    string temp = to_string(i)+to_string(j)+to_string(k) + to_string(j) + to_string(i);
                    ans = (ans + check(s, temp)) % mod;
                }
            }
        }
        return ans;
    }
};