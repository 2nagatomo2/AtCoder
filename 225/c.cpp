#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, m;
    cin >> n >> m;
    int b[n][m];
    rep(i, n) rep(j, m) {
        cin >> b[i][j];
    }
    int x = b[0][0] / 7;
    int y = b[0][0] % 7 - 1;
    
    if(m > 7 - ((y+7) % 7)) {
        cout << "No" << endl;
        return 0;
    }
    rep(i, n) rep(j, m) {
        if(b[i][j] != 7*(x+i) + y+j+1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}