#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
using mint = modint998244353;

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)


int main() {
    string s;
    cin >> s;
    int l = s.length();
    vector<vector<mint>> dp(l+1, vector<mint>(l, 0));
    dp[0][0] = 1;
    rep(i, l) rep(j, l) {
        if(s[i] != ')' && j != l-1) dp[i+1][j+1] += dp[i][j];
        if(s[i] != '(' && j != 0) if(j != 0) dp[i+1][j-1] += dp[i][j];
    }
    
    cout << dp[l][0].val() << endl;
    return 0;
}