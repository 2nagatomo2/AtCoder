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
    int a[h][w];
    rep(i, h) rep(j, w) cin >> a[i][j];
    rep(i, h-1) REP(j, i+1, h) {
        rep(k, w-1) REP(l, k+1, w) {
            if(a[i][k] + a[j][l] > a[j][k] + a[i][l]) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}