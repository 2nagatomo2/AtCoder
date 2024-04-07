#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    cin >> n;
    int x[n], y[n];
    rep(i, n) {
        cin >> x[i] >> y[i];
    }

    int d = 0, ans = 0;
    rep(i, n) {
        d = 0;
        ans = 0;
        rep(j, n) {
            if(d < (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j])) {
                d = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
                ans = j;
            }
        }
        cout << ans+1 << endl;
    }
    return 0;
}