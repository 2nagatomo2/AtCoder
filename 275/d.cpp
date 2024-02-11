#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long

#define rep(i,n) for (int i=0; i<(n); i++)

map<ll, ll> memo; 

ll f(ll k) {
    if(k == 0) return 1;

    if(memo[k] != 0) return memo[k];

    ll ans = f(k/2) + f(k/3);
    memo[k] = ans;
    return ans;
}
int main() {
    ll n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}