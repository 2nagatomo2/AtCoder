#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, q;
    cin >> n >> q;
    int t[q];
    bool exist[n];
    rep(i, q) {
        cin >> t[i];
        t[i]--;
    }

    rep(i, n) exist[i] = true;

    rep(i, q) {
        if(exist[t[i]]) exist[t[i]] = false;
        else exist[t[i]] = true;
    }

    int ans = 0;
    rep(i, n) {
        if(exist[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}