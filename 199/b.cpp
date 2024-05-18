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
    int n, minx = 0, maxx = 1000;
    cin >> n;
    int a, b;
    rep(i, n) {
        cin >> a;
        chmax(minx, a);
    }
    rep(i, n) {
        cin >> b;
        chmin(maxx, b);
    }
    if(minx > maxx) cout << 0 << endl;
    else cout << maxx - minx + 1 << endl;
    return 0;
}