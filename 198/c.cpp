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
    ll r;
    long double x, y;
    cin >> r >> x >> y;
    ll ans;
    if(sqrt(x*x + y*y) == r) ans = 1;
    else if(sqrt(x*x + y*y) / r < 1) ans = 2;
    else ans = ceil(sqrt(x*x + y*y) / r);
    cout << ans << endl;
    return 0;
}