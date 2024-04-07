#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, m;
    cin >> n >> m;
    string s[n], t;
    map<string, int> mp;
    rep(i, n) {
        cin >> s[i];
        mp[s[i]]++;
    }
    rep(i, m) {
        cin >> t;
        mp[t]++;
    }
    rep(i, n) {
        if(mp[s[i]] == 1) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}