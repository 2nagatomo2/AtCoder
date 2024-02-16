#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int H, W;
    cin >> H >> W;
    string G[H];
    bool visited[H][W];
    rep(i, H) cin >> G[i];
    rep(i, H) rep(j, W) {
        visited[i][j] = false;
    }
    map<char, pair<int, int> > move;
    move['U'] = make_pair(-1, 0);
    move['D'] = make_pair(1, 0);
    move['L'] = make_pair(0, -1);
    move['R'] = make_pair(0, 1);
    pair<int, int> pos = make_pair(0, 0);
    visited[0][0] = true;
    while(true) {
        char x = G[pos.first][pos.second];
        pos.first += move[x].first;
        pos.second += move[x].second;
        if(pos.first < 0 || pos.first >= H || pos.second < 0 || pos.second >= W) {
            cout << pos.first - move[x].first + 1 << ' ' << pos.second - move[x].second + 1 << endl;
            break;
        }
        if(visited[pos.first][pos.second]) {
            cout << -1 << endl;
            break;
        }
        visited[pos.first][pos.second] = true;
    }
    return 0;
}