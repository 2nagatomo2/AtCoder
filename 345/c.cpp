#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    string s;
    cin >> s;
    ll n = s.length();
    map<char, ll> mp;
    rep(i, n) mp[s[i]]++;
    ll ans = n * (n-1) / 2, cnt = 0;
    for(auto itr = mp.begin(); itr != mp.end(); itr++) {
        if(itr->second >= 2) {
            ans -= itr->second * (itr->second-1) / 2;
            ans++;
            cnt++;
        }
    }
    if(cnt >= 2) ans -= cnt - 1;
    cout << ans << endl;
    return 0;
}