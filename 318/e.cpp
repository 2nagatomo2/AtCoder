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
    int n;
    cin >> n;
    vector<int> a(n);
    map<int , vector<ll>> mp;
    rep(i, n) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    ll ans = 0;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        rep(i, itr->second.size()-1) {
            ans += (itr->second[i+1] - itr->second[i] - 1) * (i+1) * (itr->second.size() - i - 1);
        }
    }
    cout << ans << endl;
    return 0;
}