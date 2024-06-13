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
    int n, x, y, sumx = 0, sumy = 0;
    cin >> n >> x >> y;
    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
        if(i % 2 == 0) sumx += a[i];
        else sumy += a[i];
    }
    set<int> st1;
    set<int> st2;
    st1.insert(sumx);
    st2.insert(sumy);
    rep(i, n) {
        if(i == 0) continue;
        if(i % 2 == 0) {
            for(int x : st1) st1.insert(x - 2 * a[i]);
        } else {
            for(int x : st2) st2.insert(x - 2 * a[i]);
        }
    }
    if(st1.count(x) && st2.count(y)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}