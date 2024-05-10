#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (ll i=0; i<(n); i++)
#define REP(i,b,n) for(ll i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll a, b;
    ll c;
    cin >> a >> b >> c;
    ll cnt = 0, l = 0;
    ll tmp = c;
    while(tmp > 0) {
        if(tmp % 2 == 1) cnt++;
        tmp /= 2;
        l++;
    }
    
    if(a + b < cnt) cout << -1 << endl;
    else if((a + b + cnt) / 2 > 60) cout << -1 << endl;
    else if((a + b - cnt) % 2 == 1) cout << -1 << endl;
    else if((a + b - cnt) / 2 > a || (a + b - cnt) / 2 > b) cout << -1 << endl;
    else {
        ll x = 0, y = 0;
        ll x_cnt = 0, y_cnt = 0;
        ll lim = (a + b - cnt) / 2;
        rep(i, l) {
            if((c >> i) % 2 == 1) {
                if(x_cnt != a - lim && x_cnt <= a) {
                    x += powl(2, i);
                    x_cnt++;
                } else {
                    y += powl(2, i);
                    y_cnt++;
                }
            }
        }
        
        rep(i, l) {
            if((c >> i) % 2 == 0) {
                if(x_cnt < a) {
                    x += powl(2, i);
                    y += powl(2, i);
                    x_cnt++;
                    y_cnt++;
                }
            }
        }
        rep(i, a-x_cnt) {
            x += powl(2, l+i);
            y += powl(2, l+i);
        }
        cout << x << ' ' << y << endl;
    }
    return 0;
}