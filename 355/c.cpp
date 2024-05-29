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
    int n, t, a;
    cin >> n >> t;
    vector<set<int>> tate(n), yoko(n), naname(2);
    rep(i, t) {
        cin >> a;
        tate[(a-1)%n].insert(a);
        yoko[(a-1)/n].insert(a);
        if((a-1)%n == (a-1)/n) naname[0].insert(a);
        if((a-1)%n == n - 1 - (a-1)/n) naname[1].insert(a);
        if(tate[(a-1)%n].size() == n || yoko[(a-1)/n].size() == n || naname[0].size() == n || naname[1].size() == n) {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}