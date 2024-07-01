#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<(n); i++)
#define REP(i,b,n) for(int i=b; i<(n); i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>

int main() {
    int n, a;
    cin >> n >> a;
    vector<int> t(n);
    rep(i, n) cin >> t[i];
    ll time = 0;
    rep(i, n) {
        if(time < t[i]) {
            time = t[i] + a;
        } else {
            time += a;
        }
        cout << time << endl;
    }
    return 0;
}