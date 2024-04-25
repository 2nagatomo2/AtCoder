#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, k;
    cin >> n >> k;
    int c[n];
    rep(i, n) cin >> c[i];
    map<int, int> mp;
    rep(i, k) mp[c[i]]++;
    int ans = mp.size();
    rep(i, n-k) {
        mp[c[i]]--;
        if(mp[c[i]] == 0) mp.erase(c[i]);
        mp[c[k+i]]++;
        chmax(ans, int(mp.size()));
    }
    cout << ans << endl;
    return 0;
}