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
    int a, b, c, d, e, f, g, h, i, j, k, l;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;

    // if(((a <= g) && (g < d)) && ((b <= h) && (h < e)) && ((c <= i) && (i < f))) cout << "Yes" << endl;
    // else if(((a < j) && (j <= d)) && ((b <= h) && (h < e)) && ((c <= i) && (i < f))) cout << "Yes" << endl;
    // else if(((a < j) && (j <= d)) && ((b < k) && (k <= e)) && ((c <= i) && (i < f))) cout << "Yes" << endl;
    // else if(((a <= g) && (g < d)) && ((b < k) && (k <= e)) && ((c <= i) && (i < f))) cout << "Yes" << endl;
    // else if(((a <= g) && (g < d)) && ((b <= h) && (h < e)) && ((c < l) && (l <= f))) cout << "Yes" << endl;
    // else if(((a < j) && (j <= d)) && ((b <= h) && (h < e)) && ((c < l) && (l <= f))) cout << "Yes" << endl;
    // else if(((a < j) && (j <= d)) && ((b < k) && (k <= e)) && ((c < l) && (l <= f))) cout << "Yes" << endl;
    // else if(((a <= g) && (g < d)) && ((b < k) && (k <= e)) && ((c < l) && (l <= f))) cout << "Yes" << endl;
    // else cout << "No" << endl;

    REP(x, a, d) REP(y, b, e) REP(z, c, f) {
        if(g <= x && x < j && h <= y && y < k && i <= z && z < l) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}