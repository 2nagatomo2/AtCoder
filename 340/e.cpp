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

using S = ll;
using F = ll;

const S INF = 8e18;

S op(S a, S b){ return std::max(a, b); }
S e(){ return -INF; }
S mapping(F f, S x){ return f+x; }
F composition(F f, F g){ return f+g; }
F id(){ return 0; }

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    lazy_segtree<S, op, e, F, mapping, composition, id> seg(a);

    rep(i, m) {
        ll num = seg.get(b[i]);
        seg.set(b[i], 0);
        seg.apply(0, n, num/n);
        ll mod = num % n;
        if(mod > 0) {
            if(mod == 1) {
                seg.apply((b[i]+1) % n, 1ll);
            } else {
                if(b[i]+mod+1 <= n) {
                    seg.apply(b[i]+1, b[i]+mod+1, 1ll);
                } else if(b[i] == n-1) {
                    seg.apply(0, mod, 1ll);
                } else {
                    seg.apply(b[i]+1, n, 1ll);
                    seg.apply(0, (b[i]+mod) % n + 1, 1ll);
                }
            }
        }
        // rep(i, n) cout << seg.get(i) << ' ';
        // cout << endl;
    }

    rep(i, n) cout << seg.get(i) << ' ';
    cout << endl;
    return 0;
}