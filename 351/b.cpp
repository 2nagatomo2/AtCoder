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
    char a[n][n], b[n][n];
    rep(i, n) rep(j, n) cin >> a[i][j];
    rep(i, n) rep(j, n) {
        cin >> b[i][j];
        if(a[i][j] != b[i][j]) {
            cout << i+1 << ' ' << j + 1 << endl;
        }
    }


    return 0;
}