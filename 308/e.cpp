#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, b, n) for (int i = b; i < n; i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(), x.end()

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    string s;
    cin >> s;

    vector<vector<ll>> m(n, vector<ll>(3, 0)), x(n, vector<ll>(3, 0));
    if(s[0] == 'M') m[0][a[0]]++;
    if(s[n-1] == 'X') x[n-1][a[n-1]]++;

    rep(i, n-1) {
        rep(j, 3) {
            m[i+1][j] = m[i][j];
            x[n-2-i][j] = x[n-1-i][j];
        }
        if(s[i+1] == 'M') m[i+1][a[i+1]]++;
        if(s[n-2-i] == 'X') x[n-2-i][a[n-2-i]]++;
    }

    ll ans = 0;
    rep(i, n) {
        if(s[i] == 'E') {
            rep(j, 3) rep(k, 3) {
                set<int> st = {0, 1, 2};
                st.erase(j);
                st.erase(k);
                st.erase(a[i]);
                if(st.empty()) ans += 3 * m[i][j] * x[i][k];
                else ans += *st.begin() * m[i][j] * x[i][k];
            }
        }
    }

    cout << ans << endl;
    return 0;
}