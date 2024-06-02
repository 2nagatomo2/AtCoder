#include <bits/stdc++.h>

// #include "../cpp-dump/dump.hpp"
// #ifdef DEFINED_ONLY_IN_LOCAL
// #define dump(...) cpp_dump(__VA_ARGS__)
// namespace cp = cpp_dump;
// #else
// #define dump(...)
// #define CPP_DUMP_SET_OPTION(...)
// #define CPP_DUMP_DEFINE_EXPORT_OBJECT(...)
// #define CPP_DUMP_DEFINE_EXPORT_ENUM(...)
// #define CPP_DUMP_DEFINE_DANGEROUS_EXPORT_OBJECT(...)
// #endif
using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    int n, t, m, a, b;
    cin >> n >> t >> m;
    vector<vector<bool>> bad(n, vector<bool>(n, false));
    rep(i, m) {
        cin >> a >> b;
        a--;
        b--;
        bad[a][b] = true;
        bad[b][a] = true;
    }

    vector<vector<int>> team;
    int ans = 0;
    // ラムダ式
    // 自分自身を引数に取るときは[&]をつける．
    // 返り値の型を明示
    auto f = [&](auto f, int i) -> void {
        if(i == n) {
            if(team.size() == t) ans++;
            return;
        }
        rep(j, team.size()) {
            bool ok = true;
            for(int p : team[j]) {
                if(bad[i][p]) ok = false;
            }
            if(ok) {
                team[j].push_back(i);
                f(f, i+1);
                team[j].pop_back();
            }
        }
        team.push_back(vector<int>(1, i));
        f(f, i+1);
        team.pop_back();
    };
    f(f, 0);
    cout << ans << endl;
    return 0;
}