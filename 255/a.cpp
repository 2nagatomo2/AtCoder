#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int r, c, a[2][2];
    cin >> r >> c;
    rep(i, 2) rep(j, 2) cin >> a[i][j];
    cout << a[r-1][c-1] << endl;
    return 0;
}