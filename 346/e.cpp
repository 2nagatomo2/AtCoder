#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll h, w, m;
    cin >> h >> w >> m;
    vector<ll> t(m), a(m), x(m);
    map<ll, ll> mp; // 色 key，個数を value とする連想配列
    set<ll> row, col; // 色が塗られた行・列を管理する集合
    ll cnt = 0; // 色が塗られたマスの合計
    rep(i, m) cin >> t[i] >> a[i] >> x[i];

    for(int i = m-1; i >= 0; i--) { // 逆順に操作
        if(t[i] == 1) {
            if(!row.count(a[i])) {
                if(w - col.size() > 0) {
                    mp[x[i]] += w - col.size();
                    cnt += w - col.size();
                    row.insert(a[i]);
                }
            }
        } else {
            if(!col.count(a[i])) {
                if(h - row.size() > 0) {
                    mp[x[i]] += h - row.size();
                    cnt += h - row.size();
                    col.insert(a[i]);
                }
            }
        }
    }
    if(cnt != h * w) mp[0] += h * w - cnt;
    cout << mp.size() << endl;
    for(auto i : mp) {
        cout << i.first << ' ' << i.second << endl;
    }
    return 0;
}