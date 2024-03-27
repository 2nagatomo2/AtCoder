#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    vector<vector<char>> s(n * a, vector<char>(n * b));

    rep(i, n) {
        rep(j, n) {
            if((i + j) % 2 == 0) {
                rep(k, a) rep(l, b) {
                    s[a * i + k][b * j + l] = '.';
                }
            } else {
                rep(k, a) rep(l, b) {
                    s[a * i + k][b * j + l] = '#';
                }
            }
        }
    }

    rep(i, n * a) {
        rep(j, n * b) {
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}