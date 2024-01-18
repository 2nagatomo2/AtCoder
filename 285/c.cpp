#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s;
    cin >> s;
    ll ans = 0;
    ll kake = 1;
    rep(i, s.length()) {
        ans += (int(s[s.length()-1-i]) - int('A') + 1) * kake;
        kake *= 26;
    }
    cout << ans << endl;
    return 0;
}