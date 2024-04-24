#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll n;
    cin >> n;
    ll const MOD = 998244353;
    ll pre[9], pos[9];
    ll ans = 0;
    rep(i, n) {
        if(i != 0) {
            rep(j, 9) {
                pre[j] = pos[j];
            }
        }
        rep(j, 9) {
            if(i == 0) pos[j] = 1;
            else {
                if(j == 0) pos[0] = (pos[0] + pos[1]) % MOD;
                else if(j == 8) pos[8] = (pre[7] + pre[8]) % MOD;
                else pos[j] = (((pre[j-1] + pre[j]) % MOD) + pre[j+1]) % MOD;
            }
            if(i == n-1) {
                ans += pos[j];
                ans %= MOD;
            }
        }
    }
    cout << ans << endl;
    return 0;
}