#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    int ans = 1000000;
    rep(i, n) {
        rep(j, n) {
            if(i == j) {
                chmin(ans, a[i] + b[j]);
            } else {
                chmin(ans, max(a[i], b[j]));
            }
        }
    }
    cout << ans << endl;
}