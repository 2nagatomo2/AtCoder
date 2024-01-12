#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int x[5 * n];
    rep(i, 5 * n) cin >> x[i];
    sort(x, x + 5 * n);

    double ans = 0;
    for(int i = n; i < 4 * n; i++) {
        ans += x[i];
    }
    ans /= 3 * n;
    cout << ans << endl;
    return 0;
}