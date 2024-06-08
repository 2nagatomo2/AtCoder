#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    int n, m;
    cin >> n >> m;
    int h[n];
    rep(i, n) cin >> h[i];
    int sum = 0;
    int ans = 0;
    rep(i, n) {
        sum += h[i];
        if(sum > m) {
            cout << ans << endl;
            return 0;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}