#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i, n) for (int i = 0; i < (n); i++)
#define REP(i, b, n) for (int i = b; i < (n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(), x.end()

int main() {
    ll n;
    cin >> n;
    set<ll> st;
    for(ll i = 2; i * i <= n; i++) {
        for(ll j = i*i; j <= n; j *= i) {
            st.insert(j);
        }
    }

    cout << n - st.size() << endl;
    return 0;
}