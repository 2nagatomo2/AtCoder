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
    int h[n];
    rep(i, n) cin >> h[i];
    int ans = h[0];
    rep(i, n-1) {
        if(ans < h[i+1]) ans = h[i+1];
        else break;
    }
    cout << ans << endl;
    return 0;
}