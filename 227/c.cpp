#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll n, ans = 0;
    cin >> n;
    
    for(ll i = 1; i * i * i <= n; i++) {
        for(ll j = i; i * j * j <= n; j++) {
            ll tmp = n / (i * j);
            ans += tmp - j + 1;
        }
    }
    cout << ans << endl;
    return 0;
}