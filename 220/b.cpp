#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll k, a, b;
    cin >> k >> a >> b;
    ll da = 0, db = 0, base = 1;
    while(a > 0) {
        da += base * (a % 10);
        a /= 10;
        base *= k;
    }
    base = 1;
    while(b > 0) {
        db += base * (b % 10);
        b /= 10;
        base *= k;
    }
    cout << da * db << endl;
    return 0;
}