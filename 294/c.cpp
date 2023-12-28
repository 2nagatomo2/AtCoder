#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m], c[n+m];
    rep(i, n) {
        cin >> a[i];
        c[i] = a[i];
    }
    rep(i, m) {
        cin >> b[i];
        c[n+i] = b[i]; 
    }
    sort(c, c+m+n);

    rep(i, n) {
        auto iter_a = lower_bound(c, c+n+m, a[i]);
        int ans = distance(c, iter_a);
        cout << ans+1 << ' ';
    }
    cout << endl;
    rep(i, m) {
        auto iter_b = lower_bound(c, c+n+m, b[i]);
        int ans = distance(c, iter_b);
        cout << ans+1 << ' ';
    }
    cout << endl;
    return 0;
}