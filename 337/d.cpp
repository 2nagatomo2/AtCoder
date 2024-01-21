#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    string s[h];
    rep(i, h) cin >> s[i];

    int dp[h+1][w+1][2]; // 0で縦、1で横の連続数を管理
    int dot[h+1][w+1][2]; // dotの連続数を管理
    rep(i, w+1) {
        dp[0][i][0] = 0;
        dp[0][i][1] = 0;
    }
    rep(i, h+1) {
        dp[i][0][0] = 0;
        dp[i][0][1] = 0;
    }
    rep(i, h+1) rep(j, w+1) {
        dot[i][j][0] = 0;
        dot[i][j][1] = 0;
    }

    int ans = k + 1;
    for(int i=1; i<=h; i++) {
        for(int j=1; j<=w; j++) {
            if(s[i-1][j-1] == 'x') {
                dp[i][j][0] = 0;
                dp[i][j][1] = 0;
                dot[i][j][0] = 0;
                dot[i][j][1] = 0;
            } else {
                dp[i][j][0] = dp[i-1][j][0] + 1;
                dp[i][j][1] = dp[i][j-1][1] + 1;
                if(s[i-1][j-1] == '.') {
                    dot[i][j][0] = dot[i-1][j][0] + 1;
                    dot[i][j][1] = dot[i][j-1][1] + 1;
                } else {
                    dot[i][j][0] = dot[i-1][j][0];
                    dot[i][j][1] = dot[i][j-1][1];                
                }
                if(dp[i][j][0] >= k) {
                    ans = min(ans, dot[i][j][0] - dot[i-k][j][0]);
                }
                if(dp[i][j][1] >= k) {
                    ans = min(ans, dot[i][j][1] - dot[i][j-k][1]);
                }
            }
        }
    }

    if(ans == k+1) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}