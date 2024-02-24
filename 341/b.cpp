#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    cin >> n;
    ll a[n], s[n-1], t[n-1];
    rep(i, n) cin >> a[i];
    rep(i, n-1) {
        cin >> s[i] >> t[i];
    }
    rep(i, n-1) {
        a[i+1] += a[i] / s[i] * t[i];
    }
    cout << a[n-1] << endl;
    return 0;
}