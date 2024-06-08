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
    int n;
    cin >> n;
    vector<vector<char>> b(powl(3, n), vector<char>(powl(3, n)));

    auto f = [&](auto f, int k, int h, int w) -> void {
        if(k == 0) {
            b[h][w] = '#';
        } else {
            rep(i, powl(3, k-1)) {
                rep(j, powl(3, k-1)) {
                    b[h+powl(3, k-1)+i][w+powl(3, k-1)+j] = '.';
                }
            }
            f(f, k-1, h, w);
            f(f, k-1, h, w+powl(3, k-1));
            f(f, k-1, h, w+(2*powl(3, k-1)));
            f(f, k-1, h+powl(3, k-1), w);
            f(f, k-1, h+powl(3, k-1), w+(2*powl(3, k-1)));
            f(f, k-1, h+(2*powl(3, k-1)), w);
            f(f, k-1, h+(2*powl(3, k-1)), w+powl(3, k-1));
            f(f, k-1, h+(2*powl(3, k-1)), w+(2*powl(3, k-1)));
        }
    };

    f(f, n, 0, 0);
    
    rep(i, powl(3, n)) {
        rep(j, powl(3, n)) {
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}