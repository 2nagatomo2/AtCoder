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
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];
    rep(i, n) {
        a[i] = i+1;
    }
    rep(i, r-l+1) {
        a[l+i-1] = r - i;
    }
    rep(i, n) {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}