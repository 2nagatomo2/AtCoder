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
    int a[n];
    map<int, int> mp;
    rep(i, n) {
        cin >> a[i];
        mp[a[i]%200]++;
    }

    ll ans = 0;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        ll siz = itr->second;
        ans += siz * (siz - 1) / 2;
    }

    cout << ans << endl;
    return 0;
}