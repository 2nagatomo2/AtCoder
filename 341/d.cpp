#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)

// 最大公約数
ll gcd(ll a, ll b) {
    if(a < b) {
        ll tmp = a;
        a = b;
        b = tmp;
    }
    if(b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// 最小公倍数
ll lcm(ll a, ll b) {
    if(a < b) {
        ll tmp = a;
        a = b;
        b = tmp;
    }
    ll d = gcd(a, b);
    return a / d * b;
}

// 素因数分解
vector<pair<ll, ll>> prime_factorization(ll x) {
    vector<pair<ll, ll>> res;
    for(int i=2; i*i<=x; i++) {
        if(x % i != 0) continue;

        ll ex = 0; // 指数を保持する変数
        
        // 割り切れなくなるまで割り続ける
        while(x % i == 0) {
            ex++;
            x /= i;
        }
        res.push_back({i, ex});
    }

    if(x != 1) res.push_back({x, 1});
    return res;
}

int main() {
    ll n, m, k;
    cin >> n >> m >> k;

    ll L = lcm(n, m);
    ll l = 0, r = 2e+18, mid, y;
    while(r - l > 1) {
        mid = (r + l) / 2;
        y = (mid / n) + (mid / m) - 2 * (mid / L);
        if(y < k) l = mid;
        else r = mid;
    }
    cout << r << endl;
    return 0;
}