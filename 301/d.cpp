#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    string s;
    ll n;
    cin >> s >> n;
    int l = s.length();
    ll ans = 0;

    rep(i, l) if(s[i] == '1') ans += (1ll << (l-i-1));

    if(ans > n) {
        cout << -1 << endl;
        return 0;
    }

    rep(i, l) {
        if(s[i] == '?') {
            if((ans + (1ll << (l-i-1))) <= n) ans += (1ll << (l-i-1));
        }
    }
    cout << ans << endl;
    return 0;
}