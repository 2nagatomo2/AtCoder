#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

ll f(ll x) {
    return x * x + 2 * x + 3;
}

int main() {
    ll t;
    cin >> t;
    ll ans = f(f(f(t) + t) + f(f(t)));
    cout << ans << endl;
    return 0;
}