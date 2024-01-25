#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

double y(ll a, ll b, ll x) {
    return a / sqrt(x + 1) + b * x;
}

int main() {
    ll a, b;
    cin >> a >> b;
    double ans;
    if(a <= 2 * b) {
        ans = double(a);
    } else {
        ll x = pow((double)a / (2 * b), 2. / 3.) - 1;
        ans = min(y(a, b, x), y(a, b, x+1));
    }

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}