#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int h, w;
    cin >> h >> w;
    int a[h][w], b[w][h];
    rep(i, h) rep(j, w) {
        cin >> a[i][j];
        b[j][i] = a[i][j];
    }
    rep(i, w) {
        rep(j, h) cout << b[i][j] << " ";
        cout << endl;
    }
    return 0;
}