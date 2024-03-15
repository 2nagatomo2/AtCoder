#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int h, w;
    cin >> h >> w;
    string s[h];
    vector<pair<int, int>> idx;
    rep(i, h) cin >> s[i];
    rep(i, h) {
        rep(j, w) {
            if(s[i][j] == 'o') idx.push_back({i, j});
        }
    }
    int ans = abs(idx[0].first - idx[1].first) + abs(idx[0].second - idx[1].second);
    cout << ans << endl;
    return 0;
}