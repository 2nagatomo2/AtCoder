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
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<vector<bool>> used(n, vector<bool>(m, false));
    vector<vector<bool>> stopped(n, vector<bool>(m, false));
    stopped[1][1] = true;
    vector<vector<int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

    auto f = [&](auto f, int h, int w, auto direction, bool skating) -> void {
        if(s[h][w] == '.') {
            used[h][w] = true;
            if(skating) {
                f(f, h+direction[0], w+direction[1], direction, true);
            } else {
                for(auto x : d) {
                    f(f, h+x[0], w+x[1], x, true);
                }
            }
        } else {
            if(!stopped[h-direction[0]][w-direction[1]]) {
                stopped[h-direction[0]][w-direction[1]] = true;
                f(f, h-direction[0], w-direction[1], direction, false);
            }
        }
        
    };

    f(f, 1, 1, d[0], false);
    int ans = 0;
    rep(i, n) rep(j, m) {
        if(used[i][j]) ans++;
    }
    cout << ans << endl;
    return 0;
}