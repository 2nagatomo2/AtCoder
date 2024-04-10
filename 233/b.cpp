#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int l, r;
    string s;
    cin >> l >> r >> s;
    rep(i, l-1) cout << s[i];
    rep(i, r-l+1) cout << s[r-1-i];
    rep(i, s.length()-r) cout << s[r+i];
    cout << endl;
    return 0;
}