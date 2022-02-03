class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        bool dp[n][n];
        int l=0,r=0;
        memset(dp,false,sizeof(dp));
        for(int i=0;i<n;i++){
            dp[i][i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;i+j<n;j++){
                if(s[j]==s[i+j] &&(i==1 || dp[j+1][i+j-1])){
                    if(r-l<i){
                        l=j;
                        r=i+j;
                    }
                    dp[j][i+j]=1;
                }
            }
        }
        string ans;
        for(int i=l;i<=r;i++){
            ans+=s[i];
        }
        return ans;
    }
};