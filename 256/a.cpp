#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

int main() {
    int n;
    cin >> n;
    ll ans = 1;
    rep(i, n) ans *= 2;
    cout << ans << endl;
    return 0;
}