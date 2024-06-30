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
    ll n;
    cin >> n;
    int l = to_string(n).length();
    ll ans;
    if(l % 2 == 0) {
        ll x = powl(10, l/2);
        ll pre = n / x, pos = n % x;
        if(pre % x == 0) ans = x - 1;
        else {
            if(pre > pos) ans = pre - 1;
            else ans = pre;
        }
    } else {
        ans = powl(10, (l-1)/2) - 1;
    }
    cout << ans << endl;
    return 0;
}