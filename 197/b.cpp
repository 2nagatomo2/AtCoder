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
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    x--;
    y--;
    string s[h];
    rep(i, h) cin >> s[i];
    int ans = 1;
    int idx = x-1;
    while(idx >= 0) {
        if(s[idx][y] == '.') {
            ans++;
            idx--;
        }
        else break;
    }
    idx = x+1;
    while(idx < h) {
        if(s[idx][y] == '.') {
            ans++;
            idx++;
        }
        else break;
    }
    idx = y-1;
    while(idx >= 0) {
        if(s[x][idx] == '.') {
            ans++;
            idx--;
        }
        else break;
    }
    idx = y+1;
    while(idx < w) {
        if(s[x][idx] == '.') {
            ans++;
            idx++;
        }
        else break;
    }
    cout << ans << endl;
    return 0;
}