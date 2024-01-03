#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    ll a, m, l, r;
    cin >> a >> m >> l >> r;

    // Aを原点にする
    l -= a;
    r -= a;

    // l, rを非負整数の範囲にする
    if (l < 0) {
        ll X = - l / m + 1;
        l += X*m;
        r += X*m;
    }
    
    ll ans = r / m - (l - 1) / m;
    cout << ans << endl;
    return 0;
}