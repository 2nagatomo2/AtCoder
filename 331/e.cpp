#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    int n, m, l;
    cin >> n >> m >> l;
    vector<ll> a(n), b(m), ord_b(m);
    set<pll> p;
    rep(i, n) cin >> a[i];
    rep(i, m) {
        cin >> b[i];
        ord_b[i] = i;
    }
    sort(all(ord_b), [&](int i, int j) { return b[i] > b[j]; }); // 副菜を高い順に並べた時のインデックスを持つ

    priority_queue<pll> pq; // 主菜と副菜の合計の値段と，主菜のインデックス
    vector<int> cur(n, 0); // 主菜がiの定食をどこまで調べたか
    int c, d;
    rep(i, l) {
        cin >> c >> d;
        c--;
        d--;
        p.insert({c, d});
    }

    rep(i, n) {
        pq.push({a[i] + b[ord_b[0]], i});
    }

    while(true) {
        auto [cost, i] = pq.top();
        pq.pop();
        int j = cur[i]; // j は 主菜が i のペアとして，高い順に並べた時のどこまで副菜を調べたか．
        if(!p.count({i, ord_b[j]})) {
            cout << cost << endl; // 提供しているペアの時は値段の合計を出力
            break;
        } else {
            cur[i]++; // 提供していないペアだった時は次の副菜を調べる．
            if(cur[i] < m) pq.push({a[i] + b[ord_b[cur[i]]], i});
        }
    }

    return 0;
}