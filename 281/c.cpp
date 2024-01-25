#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    ll t;
    cin >> n >> t;
    ll a[n], acc[n];
    rep(i, n) {
        cin >> a[i];
    }
    acc[0] = a[0];
    rep(i, n-1) {
        acc[i+1] = acc[i] + a[i+1];
    }

    int ans = lower_bound(acc, acc+n, t % acc[n-1]) - acc + 1;
    
    int time;
    if(ans == 1) {
        time = t % acc[n-1];
    } else {
        time = t % acc[n-1] - acc[ans-2];
    }
    cout << ans  << ' ' << time << endl;
    return 0;
}