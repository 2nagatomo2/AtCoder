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

int main() {
    int n, a;
    cin >> n;
    map<int, int> mp;
    rep(i, n) {
        cin >> a;
        mp[a]++;
    }

    ll ans = 0;
    for(auto i = mp.begin(); i != mp.end(); i++) {
        for(auto j = i; j != mp.end(); j++) {
            if(i != j) {
                ans += powl((i->first - j->first), 2) * i->second * j->second;
            }
        }
    }
    cout << ans << endl;
    return 0;
}