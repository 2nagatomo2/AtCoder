#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    ll ans = n * (n + 1) / 2, c = a * b / gcd(a, b);
    ans -= (a + a * (n / a)) * (n / a) / 2;
    ans -= (b + b * (n / b)) * (n / b) / 2;
    ans += (c + c * (n / c)) * (n / c) / 2;
    cout << ans << endl;
    return 0;
}