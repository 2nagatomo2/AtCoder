#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    char g[h][w];
    rep(i, h) rep(j, w) g[i][j] = '.';
    int dh = -1, dw = 0, pos_h = 0, pos_w = 0;

    rep(i, n) {
        if(g[pos_h][pos_w] == '.') {
            g[pos_h][pos_w] = '#';
            int tmp_dh = dh * 0 + dw * 1;
            int tmp_dw = -dh * 1 + dw * 0;
            dh = tmp_dh; dw = tmp_dw;
            pos_h = (pos_h + dh + h) % h;
            pos_w = (pos_w + dw + w) % w;
        } else {
            g[pos_h][pos_w] = '.';
            int tmp_dh = dh * 0 - dw * 1;
            int tmp_dw = dh * 1 + dw * 0;
            dh = tmp_dh; dw = tmp_dw;
            pos_h = (pos_h + dh + h) % h;
            pos_w = (pos_w + dw + w) % w;
        }
    }

    rep(i, h) {
        rep(j, w) {
            cout << g[i][j];
        }
        cout << endl;
    }
    return 0;
}