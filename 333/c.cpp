#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    int n;
    cin >> n;
    int x = 1, y = 1, z = 1;
    
    while(n > x * (x + 1) * (x + 2) / 6) {
        x++;
    }
    int x_ = (x - 1) * x * (x + 1) / 6;

    while(n - x_ > y * (y + 1) / 2) {
        y++;
    }
    int y_ = (y - 1) * y / 2;
    z = n - x_ - y_;

    ll ans = 0;
    ll repunit = 1;
    rep(i, x-1) {
        repunit = repunit * 10 + 1;
    }
    ans += repunit;
    repunit = 1;
    rep(i, y-1) {
        repunit = repunit * 10 + 1;
    }
    ans += repunit;
    repunit = 1;
    rep(i, z-1) {
        repunit = repunit * 10 + 1;
    }
    ans += repunit;
    cout << ans << endl;
    return 0;
}