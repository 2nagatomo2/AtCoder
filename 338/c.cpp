#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    cin >> n;
    ll a[n];
    rep(i, n) cin >> a[i];

    ll acc[n];
    acc[0] = a[0];
    ll min_acc = a[0];
    if(a[0] > 0) min_acc = 0;
    rep(i, n-1) {
        acc[i+1] = acc[i] + a[i+1];
        min_acc = min(min_acc, acc[i+1]);
    }

    ll ans = acc[n-1] - min_acc;
    cout << ans << endl;
    return 0;
}