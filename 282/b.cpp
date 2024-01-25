#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m;
    cin >> n >> m;
    string s[n];
    rep(i, n) cin >> s[i];
    int cnt = 0, ans = 0;
    rep(i, n-1) {
        for(int j=i+1; j<n; j++) {
            cnt = 0;
            rep(k, m) {
                if(s[i][k] == 'o' || s[j][k] == 'o') {
                    cnt++;
                }
            }
            if(cnt == m) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}