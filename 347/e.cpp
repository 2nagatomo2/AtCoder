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
    int n, q, x;
    cin >> n >> q;
    vector<ll> a(n+1, 0);
    set<int> s;
    vector<ll> s_sum(q+1, 0);
    vector<int> check(n+1, -1); 
    //　check[i] := (1度も i が挿入されていない状態，もしくは最後に i が削除された状態の次に i が集合に加わったのが何回目のクエリか)
    // -1 の時は削除されている状態
    rep(i, q) {
        cin >> x;
        if(s.count(x)) {
            s.erase(x);
            a[x] += s_sum[i];
            a[x] -= max(0ll, s_sum[check[x]]);
            check[x] = -1;
        } else {
            s.insert(x);
            if(check[x] == -1) check[x] = i;
        }
        s_sum[i+1] = s_sum[i] + s.size();
    }
    rep(i, n+1) {
        if(check[i] != -1) a[i] += s_sum[q] - s_sum[check[i]];
    }
    rep(i, n) cout << a[i+1] << ' ';
    cout << endl;
    return 0;
}