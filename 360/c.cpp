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
    vector<int> a(n), w(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> w[i];

    map<int, priority_queue<int, vector<int>, greater<int>>> mp;

    rep(i, n) mp[a[i]].push(w[i]);

    ll ans = 0;

    for(auto itr= mp.begin(); itr != mp.end(); itr++) {
        auto que = itr->second;
        while(que.size() != 1) {
            ans += que.top();
            que.pop();
        }
    }

    cout << ans << endl;
    return 0;
}