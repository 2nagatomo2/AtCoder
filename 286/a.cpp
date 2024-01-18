#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    int a[n], b[n];
    rep(i, n) cin >> a[i];
    rep(i, q - p + 1) {
        swap(a[p + i - 1], a[r + i -1]);
    }

    rep(i, n) cout << a[i] << " ";
    cout << endl;
    return 0;
}