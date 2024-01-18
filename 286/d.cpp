#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, x;
    cin >> n >> x;
    int a[n], b[n];
    rep(i, n) {
        cin >> a[i] >> b[i];
    }

    bool dp[n+1][x+1];
    rep(i, n + 1) rep(j, x + 1) {
        dp[i][j] = false;
    }
    dp[0][0] = true;
    rep(i, n) {
        rep(j, x+1) {
            rep(k, b[i]+1) {
                if(j >= a[i] * k) {
                    if(dp[i][j - a[i] * k]) dp[i+1][j] = true;
                }
            }
        }
    }
    if(dp[n][x]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}