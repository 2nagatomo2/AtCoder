#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll x;
    cin >> x;
    if(x >= 0) {
        if(x % 10 == 0) cout << x / 10 << endl;
        else cout << x / 10 + 1 << endl;
    } else {
        cout << x / 10 << endl;
    }
    return 0;
}