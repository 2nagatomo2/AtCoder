#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    ll d;
    cin >> n >> d;
    vector<ll> t(n);
    rep(i, n) cin >> t[i];
    rep(i, n-1) {
        if(t[i+1] - t[i] <= d) {
            cout << t[i+1] << endl;
            exit(0);
        }
    }
    cout << -1 << endl;
    return 0;
}