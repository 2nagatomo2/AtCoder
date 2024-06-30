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

#include <atcoder/all>
using namespace atcoder;
using S = int;
S op(S a, S b) { return max(a, b); }
S e() { return 0; }

int main() {
    int n, d;
    const int INF = 5e5+1;
    cin >> n >> d;
    vector<int> a(n);
    vector<int> dp(INF, 0);
    rep(i, n) cin >> a[i];
    segtree<S, op, e> seg(dp);
    
    rep(i, n) {
        int l = max(1, a[i] - d), r = min(INF, a[i] + d + 1);
        seg.set(a[i], seg.prod(l, r)+1);
    }

    cout << seg.all_prod() << endl;
    return 0;
}