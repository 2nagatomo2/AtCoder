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
    ll l, r;
    cin >> l >> r;
    vector<pll> ans;
    
    while(l != r) {
        ll tmp = 1;
        while(l % (tmp*2) == 0 && l + (tmp*2) <= r) tmp *= 2;
        ans.push_back({l, l + tmp});
        l += tmp;
    }
    cout << ans.size() << endl;
    for(auto p : ans) {
        cout << p.first << ' ' << p.second << endl;
    }
    return 0;
}