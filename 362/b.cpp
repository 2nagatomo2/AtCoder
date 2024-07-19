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
#define fi first
#define se second
#define all(x) x.begin(),x.end()

int main() {
    pii a, b, c;
    cin >> a.first >> a.second >> b.first >> b.second >> c.first >> c.second;
    int ab = pow((a.first - b.first), 2) + pow((a.second - b.second), 2);
    int bc = pow((b.first - c.first), 2) + pow((b.second - c.second), 2);
    int ca = pow((c.first - a.first), 2) + pow((c.second - a.second), 2);
    if((ab + bc == ca) || (bc + ca == ab) || (ca + ab == bc)) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}