#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (ll i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

int main() {
    ll n;
    cin >> n;
    ll l = to_string(n).length();
    ll ans = 0;
    rep(i, l) {
        if(i == l-1) {
            ans += (i / 3) * (n - powl(10, i) + 1);
        } else {
            ans += (i / 3) * (powl(10, i+1) - powl(10, i));
        }
    }

    cout << ans << endl;
    return 0;
}