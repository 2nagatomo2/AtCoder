#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    int a[k], d[k-1];
    rep(i, k) {
        cin >> a[i];
    }

    rep(i, k-1) {
        d[i] = a[i+1] - a[i];
    }

    ll ans = 0;
    if(k % 2 == 0) {
        rep(i, k / 2) {
            ans += d[2 * i];
        }
    } else {
        if(k != 1) {
            ans = 1e11;
            ll acc_odd[(k-1) / 2], acc_even[(k-1) / 2];
            acc_odd[0] = d[0], acc_even[0] = d[1];
            rep(i, k-3) {
                if(i % 2 == 0) {
                    acc_odd[i/2 + 1] = acc_odd[i/2] + d[i+2];
                } else {
                    acc_even[(i+1)/2] = acc_even[(i-1)/2] + d[i+2];
                }
            }
            ans = min(ans, acc_even[(k-1) / 2 - 1]);
            rep(i, (k-1)/2) {
                ans = min(ans, acc_odd[i] + acc_even[(k-1) / 2 - 1] - acc_even[i]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}