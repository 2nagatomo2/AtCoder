#include <bits/stdc++.h>
#include <ranges>
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
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> l(n);

    // 初期値を丁寧に設定！！
    ll left = 0, right = 0;
    rep(i, n) {
        cin >> l[i];
        l[i]++;
        chmax(left, l[i]);
        right += l[i];
    }
    left--;
    
    while(right - left > 1) {
        ll mid = (left + right) / 2;
        ll w = 0, rows = 1;
        rep(i, n) {
            w += l[i];
            if(w > mid) {
                w = l[i];
                rows++;
            }
        }
        if(rows > m) left = mid;
        else right = mid;
    }
    
    cout << right - 1 << endl;
    return 0;
}