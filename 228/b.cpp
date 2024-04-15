#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int n, x;
    cin >> n >> x;
    x--;
    int a[n];
    bool b[n];
    rep(i, n) {
        cin >> a[i];
        a[i]--;
        b[i] = false;
    }
    int now = x;
    int ans = 0;
    while(true) {
        if(!b[now]) {
            b[now] = true;
            ans++;
            now = a[now];
        } else {
            break;
        }
    }
    cout << ans << endl;
    return 0;
}