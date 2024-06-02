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
    int n, a, c;
    cin >> n;
    vector<pair<int, int>> p;
    map<int, int> mp;
    rep(i, n) {
        cin >> a >> c;
        p.push_back({a, c});
        mp[a] = i+1;
    }
    sort(p.begin(), p.end());
    reverse(p.begin(), p.end());

    vector<int> ans;
    ans.push_back(mp[p[0].first]);
    int now_a = p[0].first, now_c = p[0].second;
    rep(i, n-1) {
        if(now_c > p[i+1].second) {
            now_c = p[i+1].second;
            ans.push_back(mp[p[i+1].first]);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    rep(i, ans.size()) cout << ans[i] << ' ';
    cout << endl;
    return 0;
}