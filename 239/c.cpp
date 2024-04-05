#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    vector<vector<ll>> vec = {{1, 2}, {1, -2}, {2, 1}, {2, -1}};
    vector<vector<ll>> xy1, xy2;

    rep(i, 4) {
        xy1.push_back({x1+vec[i][0], y1+vec[i][1]});
        xy1.push_back({x1-vec[i][0], y1-vec[i][1]});
        xy2.push_back({x2+vec[i][0], y2+vec[i][1]});
        xy2.push_back({x2-vec[i][0], y2-vec[i][1]});
    }

    rep(i, 8) {
        rep(j, 8) {
            if(xy1[i][0] == xy2[j][0] && xy1[i][1] == xy2[j][1]) {
                cout << "yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}