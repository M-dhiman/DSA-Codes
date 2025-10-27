class Solution {
public:
    int minDistance(string word1, string word2) {
        
     int a= word1.size();
     int b= word2.size();
     int i,j;
    int dp[505][505];

    for(i=0;i<=a;i++) dp[i][0]=i;
    for(j=0;j<=a;j++) dp[0][j]=j;

    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){

            if(word1[i-1]==word2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                 dp[i][j]=1+min(dp[i-1][j], min(dp[i][j-1], dp[i-1][j-1]));
            }
        }
    }

    return dp[a][b];

    }
};