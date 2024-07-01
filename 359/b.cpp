#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

int main() {
    int n, a;
    cin >> n;

    vector<vector<int>> x(n);
    rep(i, 2*n) {
        cin >> a;
        a--;
        x[a].push_back(i);
    }
    int ans = 0;
    rep(i, n) {
        if(x[i][1] - x[i][0] == 2) ans++;
    }
    cout << ans << endl;
    return 0;
}