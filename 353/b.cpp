#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    rep(i, n) cin >> a[i];
    int ans = 0, now = 0;
    rep(i, n) {
        if(now + a[i] > k) {
            ans++;
            now = a[i];
        } else {
            now += a[i];
        }
    }
    if(now != 0) ans++;
    cout << ans << endl;
    return 0;
}