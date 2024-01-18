#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (ll i=0; i<(n); i++)

bool is_kaibun(int n, string s) {
    bool flag = true;
    rep(i, n / 2) {
        if(s[i] != s[n - i - 1]) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    int n;
    ll a, b;
    string s;
    cin >> n >> a >> b >> s;
    ll ans = 5000000000000, cost;
    int l, r;
    rep(i, n) {
        cost = a * i;
        rep(j, n / 2) {
            l = i + j;
            if(i <= j) r = n - 1 - j + i;
            else r = i - j - 1;
            if(s[l] != s[r]) cost += b;
        }
        ans = min(ans, cost);
    }
    cout << ans << endl;
    return 0;
}