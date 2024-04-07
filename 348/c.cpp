#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n;
    cin >> n;
    int a[n], c[n];
    rep(i, n) cin >> a[i] >> c[i];

    map<int, set<int>> mp;
    rep(i, n) {
        mp[c[i]].insert(a[i]);
    }

    int ans = 0;
    for(auto itr1 = mp.begin(); itr1 != mp.end(); itr1++) {
        chmax(ans, *itr1->second.begin());
    }
    cout << ans << endl;
    return 0;
}