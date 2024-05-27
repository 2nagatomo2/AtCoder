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
    int n, k, p;
    cin >> n >> k >> p;
    vector<int> c(n);
    vector<vector<int>> a(n, vector<int>(k));
    rep(i, n) {
        cin >> c[i];
        rep(j, k) cin >> a[i][j];
    }
    const ll INF = 1e12;
    int x = pow(p+1, k);
    vector<vector<ll>> dp(n+1, vector<ll>(x, INF));
    dp[0][0] = 0;
    rep(i, n) {
        rep(j, x) {
            if(dp[i][j] != INF) {
                int idx = 0, now = j;
                rep(l, k) {
                    int cost = now % (p+1);
                    if(cost + a[i][l] >= p) idx += p * pow(p+1, l);
                    else idx += (cost + a[i][l]) * pow(p+1, l);
                    now /= p+1;
                }
                chmin(dp[i+1][idx], dp[i][j] + c[i]);
                chmin(dp[i+1][j], dp[i][j]);
            }
        }
    }
    if(dp[n][x-1] == INF) cout << -1 << endl;
    else cout << dp[n][x-1] << endl;
    return 0;
}