#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), acc(n), b(n-m+1);
    rep(i, n) {
        cin >> a[i];
        if(i == 0) acc[0] = a[0];
        else acc[i] = acc[i-1] + a[i];
    }
    ll ans;
    rep(i, n-m+1) {
        if(i == 0) {
            b[0] = 0;
            rep(j, m) b[0] += (j+1) * a[j];
            ans = b[0];
        } else if(i == 1) {
            b[i] = b[0] - acc[m-1] + m * a[m];
        } else {
            b[i] = b[i-1] - (acc[m+i-2] - acc[i-2]) + m * a[m+i-1];
        }
        ans = max(ans, b[i]);
    }
    cout << ans << endl;
    return 0;
}