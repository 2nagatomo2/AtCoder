#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    string s[9];
    int ans = 0;
    rep(i, 9) cin >> s[i];
    rep(i, 8) {
        rep(j, 8) {
            for(int k=1; k<min(9-i, 9-j); k++) {
                if(s[i][j] == '#' && s[i+k][j] == '#' && s[i][j+k] == '#' && s[i+k][j+k] == '#') ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}