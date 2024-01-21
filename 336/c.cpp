#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

int main() {
    ll n;
    cin >> n;
    n--;
    ll ans = 0;
    ans += (n % 5) * 2;
    ll wari = 5, kake = 20;
    while(wari <= n) {
        ans += ((n / wari) % 5) * kake;
        wari *= 5;
        kake *= 10;
    }
    cout << ans << endl;
    return 0;
}