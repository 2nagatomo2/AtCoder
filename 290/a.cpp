#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    int ans = 0;
    rep(i, m) ans += a[b[i]-1];
    cout << ans << endl;
    return 0;
}