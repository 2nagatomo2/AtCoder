#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, k;
    cin >> n >> k;
    int a[k];
    rep(i, k) cin >> a[i];
    int ans = 0, ta, ao;
    while(n > 0) {
        ta = upper_bound(a, a+k, n) - a;
        ta--;
        ans += a[ta];
        n -= a[ta];
        ao = upper_bound(a, a+k, n) - a;
        ao--;
        n -= a[ao];
    }
    cout << ans << endl;
    return 0;
}