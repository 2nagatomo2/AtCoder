#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, q, x, k;
    cin >> n >> q;
    int a[n];
    rep(i, n) cin >> a[i];
    map<int, vector<int>> mp;
    
    rep(j, n) {
        mp[a[j]].push_back(j+1);
    }

    while(q--) {
        cin >> x >> k;
        if(mp[x].size() >= k) cout << mp[x][k-1] << endl;
        else cout << -1 << endl;
    }
    return 0;
}