class Solution {
public:
    int numberWays(vector<vector<int>>& hats) {
        const int mod = 1e9+7;
        const int nHat = 40;
        int n = hats.size();

        vector<vector<int>> arr(nHat+1);
        for (int i = 0 ; i < n; i++){
            for(int h : hats[i]){
                arr[h].push_back(i);
            }
        }

        int subset = 1 << n;
        vector<vector<int>> dp(nHat+1, vector<int>(subset, 0));
        dp[0][0] = 1;

        for (int h = 1; h <= nHat; h++){
            for (int s = 0; s < subset; s++){

                dp[h][s] = (dp[h][s] + dp[h-1][s]) % mod;

                for (int p : arr[h]) {
                    int mask = 1 << p;
                    if (s & mask) {
                        dp[h][s] = (dp[h][s] + dp[h-1][s ^ mask]) % mod;
                    }
                }
            }
        }
        return dp[nHat][subset-1];
    }
};
