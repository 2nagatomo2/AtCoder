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
    int n, m;
    cin >> n >> m;
    vector<int> a, b, c;
    int x;
    rep(i, n) {
        cin >> x;
        a.push_back(x);
        c.push_back(x);
    }
    rep(i, m) {
        cin >> x;
        b.push_back(x);
        c.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    
    bool f = false;
    rep(i, m+n) {
        if(binary_search(a.begin(), a.end(), c[i])) {
            if(f) {
                cout << "Yes" << endl;
                return 0;
            } else {
                f = true;
            }
        } else {
            f = false;
        }
    }
    cout << "No" << endl;
    return 0;
}