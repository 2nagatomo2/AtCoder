#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, x;
    cin >> n >> x;
    ll a[n], b[n];
    rep(i, n) {
        cin >> a[i] >> b[i];
    }
    ll acc_a[n], acc_b[n], min_b[n];
    acc_a[0] = a[0];
    acc_b[0] = b[0];
    min_b[0] = b[0];
    rep(i, n-1) {
        acc_a[i+1] = acc_a[i] + a[i+1];
        acc_b[i+1] = acc_b[i] + b[i+1];
        min_b[i+1] = min(min_b[i], b[i+1]);
    }
    ll ans = acc_a[0] + acc_b[0] + min_b[0] * (x-1);
    rep(i, n) {
        ans = min(ans, acc_a[i] + acc_b[i] + min_b[i] * (x-i-1));
    }
    cout << ans << endl;
    return 0;
}