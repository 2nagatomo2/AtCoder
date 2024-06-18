#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

using S = int;
S op(S a, S b) { return max(a, b); }
S e() { return -1; }
S target;
bool f(S v) { return v < target; }

int main() {
    int n, q, query, x, v, l, r;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    segtree<S, op, e> seg(a);
    while(q--) {
        cin >> query;
        switch (query) {
        case 1:
            cin >> x >> v;
            x--;
            seg.set(x, v);
            break;
        case 2:
            cin >> l >> r;
            l--;
            cout << seg.prod(l, r) << endl;
            break;
        case 3:
            cin >> x >> target;
            x--;
            if(seg.prod(x, n) < target) cout << n+1 << endl;
            else cout << seg.max_right<f>(x) + 1 << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}