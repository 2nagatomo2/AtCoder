#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int x[3], y[3];
    rep(i, 3) cin >> x[i] >> y[i];
    int ans_x, ans_y;
    if(x[0] == x[1]) ans_x = x[2];
    else if(x[1] == x[2]) ans_x = x[0];
    else ans_x = x[1];
    if(y[0] == y[1]) ans_y = y[2];
    else if(y[1] == y[2]) ans_y = y[0];
    else ans_y = y[1];
    cout << ans_x << ' ' << ans_y << endl;
    return 0;
}