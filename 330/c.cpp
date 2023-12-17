#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    ll d;
    cin >> d;
    ll x_max = sqrt(d);
    ll y;
    ll ans = d;
    for(ll x=0; x<=x_max; x++) {
        y = sqrt(d - x*x);
        ans = min(ans, abs(x*x + y*y - d));
        ans = min(ans, abs(x*x + (y+1)*(y+1) - d));
    }
    cout << ans << endl;
    return 0;
}