#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    int a = 0, b = 0, x;
    rep(i, 9) {
        cin >> x;
        a += x;
    }
    rep(i, 8) {
        cin >> x;
        b += x;
    }
    if(a - b < 0) {
        cout << 0 << endl;
    } else {
        cout << a - b + 1 << endl;
    }
    return 0;
}