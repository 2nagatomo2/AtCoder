#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>

int main() {
    int h;
    cin >> h;
    int ans = 0;
    ll height = 0;
    while (true) {
        if(h < height) break;
        height += powl(2, ans);
        ans++;
    }
    cout << ans << endl;
    return 0;
}