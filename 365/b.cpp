#include <bits/stdc++.h>

using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double

#define rep(i,n) for (int i=0; i<n; i++)
#define REP(i,b,n) for(int i=b; i<n; i++)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
#define pll pair<ll, ll>
#define pii pair<int, int>
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(all(b));
    rep(i, n) {
        if(a[i] == b[n-2]) cout << i+1 << endl;
    }
    return 0;
}