#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n, q;
    string s;
    cin >> n >> s >> q;
    char ch[26];
    vector<vector<int>> v(26);
    char c, d;
    rep(i, 26) {
        ch[i] = char(int('a') + i);
    }
    rep(i, n) {
        v[int(s[i]) - int('a')].push_back(i);
    }
    
    while(q--) {
        cin >> c >> d;
        rep(i, 26) {
            if(ch[i] == c) ch[i] = d;
        }
    }
    char ans[n];
    rep(i, 26) {
        for(int x : v[i]) {
            ans[x] = ch[i];
        }
    }
    rep(i, n) cout << ans[i];
    cout << endl;
    return 0;
}