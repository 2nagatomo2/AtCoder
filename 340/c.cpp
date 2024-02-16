#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

map<ll, ll> memo;

ll f(ll x) {
    ll ans;
    if(x == 1) return 0;
    if(memo[x] != 0) return memo[x];
    ans = x + f(x / 2) + f((x+1) / 2);
    memo[x] = ans;
    return ans;
}

int main() {
    ll N;
    cin >> N;
    cout << f(N) << endl;
    return 0;
}