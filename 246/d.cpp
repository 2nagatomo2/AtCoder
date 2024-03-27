#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

ll f(ll a, ll b) {
    return a*a*a + a*a*b + a*b*b + b*b*b; 
}

int main() {
    ll n, ans = 2e18;
    cin >> n;
    for(ll a = 0; a*a*a <= n; a++) {
        ll l = 0, r = 1e6, tmp, mid;
        while(r > l) {
            mid = (l + r) / 2;
            tmp = f(a, mid);
            if(tmp == n) {
                cout << n << endl;
                return 0;
            } else if(tmp > n) {
                r = mid;
            } else {
                l = mid+1;
            }
        }
        if(f(a, mid) < n) mid++;
        chmin(ans, f(a, mid));
    }
    cout << ans << endl;
    return 0;
}