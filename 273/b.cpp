#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    double x;
    int k;
    cin >> x >> k;
    rep(i, k) {
        rep(j, i+1) x /= 10;
        x = round(x);
        rep(j, i+1) x *= 10;
    }
    cout << (ll)x << endl;
    return 0;
}