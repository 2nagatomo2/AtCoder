#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<bool> dp(k+1, false);
    rep(i, k) {
        rep(j, n) {
            if(!dp[i]) {
                if(i + a[j] <= k) dp[i+a[j]] = true;
            }
        }
    }
    if(dp[k]) cout << "First" << endl;
    else cout << "Second" << endl;
    return 0;
}