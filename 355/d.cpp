#include <bits/stdc++.h>

// #ifdef DEFINED_ONLY_IN_LOCAL
// #include "../cpp-dump/dump.hpp"
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
    int n;
    cin >> n;
    vector<int> l(n), r(n), l2(n), r2(n);
    rep(i, n) {
        cin >> l[i] >> r[i];
        l2[i] = l[i];
        r2[i] = r[i];
    }
    sort(l2.begin(), l2.end());
    sort(r2.begin(), r2.end());
    ll ans = 0;
    rep(i, n) {
        int l_tmp = lower_bound(l2.begin(), l2.end(), l[i]) - l2.begin();
        int r_tmp = upper_bound(l2.begin(), l2.end(), r[i]) - l2.begin();
        ans += r_tmp - l_tmp - 1;
    }
    int l3 = 0, r3 = 0;
while(r3 != n) {
        ll cnt = 0;
        while(l2[l3] == l2[r3] && r3 != n) {
            cnt++;
            r3++;
        }
        ans -= cnt * (cnt-1) / 2;
        l3 = r3;
    }
    cout << ans << endl;
    return 0;
}