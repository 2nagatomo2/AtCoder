#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    ll x, a, d, n, ans;
    cin >> x >> a >> d >> n;
    if(x >= a) {
        if(d > 0) {
            if(x >= a + (d * (n-1))) ans = x - (a + (d * (n-1)));
            else {
                ll m = (x - a) / d;
                ans = min(x - (a + (m * d)), a + ((m+1) * d) - x);
            }
        } else {
            ans = x - a;
        }
    } else {
        if(d >= 0) ans = a - x;
        else {
            if(x <= a + (d * (n-1))) ans = a + (d * (n-1)) - x;
            else {
                ll m = (a - x) / (-d);
                ans = min((a + (m * d)) - x, x - (a + ((m+1) * d)));
            }
        }
    }
    cout << ans << endl;
    return 0;
}