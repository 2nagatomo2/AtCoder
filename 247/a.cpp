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
    char ans[4];
    ans[0] = '0';
    rep(i, 3) ans[i+1] = s[i];
    rep(i, 4) cout << ans[i];
    cout << endl;
    return 0;
}