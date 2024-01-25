#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n, m, x;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    cin >> m;
    int b[m];
    rep(i, m) {
        cin >> b[i];
    }
    cin >> x;

    bool moti[x+1];
    rep(i, x+1) moti[i] = false;
    rep(i, m) moti[b[i]] = true;

    bool dp[x+1];
    rep(i, x+1) dp[i] = false;
    dp[0] = true;
    for(int i=1; i<=x; i++) {
        rep(j, n) {
            if(i-a[j] >= 0 && !moti[i]) {
                if(dp[i-a[j]]) dp[i] = true;
            }
        }
    }
    
    if(dp[x]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}