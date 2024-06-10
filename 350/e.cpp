#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

int main() {
    ll n, a, x, y;
    cin >> n >> a >> x >> y;
    map<ll, ld> memo;
    auto dp = [&](auto dp, ll t) -> ld {
        if(t == 0) return 0;
        if(memo.count(t)) return memo[t];

        ld p1;
        if(memo.count(t/a)) p1 = x + memo[t/a];
        else p1 = x + dp(dp, t/a);

        ld p2 = 6.0 / 5.0 * y;
        ld e = 0.0;
        for(int i = 2; i <= 6; i++) {
            if(memo.count(t/i)) e += memo[t/i];
            else e += dp(dp, t/i);
        }
        p2 += e / 5.0;
        memo[t] = min(p1, p2);
        return min(p1, p2);
    };
    
    ld ans = dp(dp, n);
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}