#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    ll n, p, q, r;
    cin >> n >> p >> q >> r;
    ll a[n], acc[n+1];
    rep(i, n) cin >> a[i];
    acc[0] = 0;
    rep(i, n) acc[i+1] = acc[i] + a[i];
    rep(i, n+1) {
        if(binary_search(acc, acc+n+1, acc[i]+p) && 
           binary_search(acc, acc+n+1, acc[i]+p+q) &&
           binary_search(acc, acc+n+1, acc[i]+p+q+r)) {
            cout << "Yes" << endl;
            return 0;
           }
    }
    cout << "No" << endl;
    return 0;
}