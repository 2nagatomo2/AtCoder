#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int H, W, N;
    string T;
    cin >> H >> W >> N >> T;
    string S[H];
    rep(i, H) cin >> S[i];

    map<char, pair<int, int>> mp;
    mp['L'] = make_pair(0, -1);
    mp['R'] = make_pair(0, 1);
    mp['U'] = make_pair(-1, 0);
    mp['D'] = make_pair(1, 0);

    int ans = 0;
    rep(i, H) {
        rep(j, W) {
            int h = i, w = j;
            bool flag = true;
            if(S[h][w] == '#') continue;
            rep(k, N) {
                h += mp[T[k]].first;
                w += mp[T[k]].second;
                if(h < 0 || h > H-1 || w < 0 || w > W-1) {
                    flag = false;
                    break;
                }
                if(S[h][w] == '#') {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}